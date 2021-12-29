<h1>NSSM - the Non-Sucking Service Manager</h1>

<h3>Managing services from the command line</h3>
<p><em>nssm</em>'s core functionality has always been available from the command line.</p>

<h3>Service installation</h3>
<pre class="code">nssm install &lt;servicename&gt;</pre>

<pre class="code">nssm install &lt;servicename&gt; &lt;program&gt;</pre>

<pre class="code">nssm install &lt;servicename&gt; &lt;program&gt; [&lt;arguments&gt;]</pre>

<p>By default the service's startup directory will be set to the directory
containing the <code>program</code>.  The startup directory can be overridden
after the service has been installed.</p>

<pre class="code">nssm set &lt;servicename&gt; AppDirectory &lt;path&gt;</pre>

<h3>Service removal</h3>
<pre class="code">nssm remove</pre>

<pre class="code">nssm remove &lt;servicename&gt;</pre>

<pre class="code">nssm remove &lt;servicename&gt; confirm</pre>

<h3>Service management</h3>
<p>As of version 2.22, <em>nssm</em> offers basic service management
functionality.  <em>nssm</em> will also accept a service
<code>displayname</code> anywhere that a <code>servicename</code> is expected,
since Windows does not allow a service to have a name or display name which
conflicts with either the name or display name of another service.  Both the
service name (also called the service key name) and its display name uniquely
identify a service.</p>

<h4>Starting and stopping a service</h4>
<pre class="code">nssm start &lt;servicename&gt;</pre>

<pre class="code">nssm stop &lt;servicename&gt;</pre>

<pre class="code">nssm restart &lt;servicename&gt;</pre>

<h4>Querying a service's status</h4>
<pre class="code">nssm status &lt;servicename&gt;</pre>

<h4>Sending controls to services</h4>
<pre class="code">nssm pause &lt;servicename&gt;</pre>

<pre class="code">nssm continue &lt;servicename&gt;</pre>

<pre class="code">nssm rotate &lt;servicename&gt;</pre>

<p><code>nssm rotate</code> triggers
<a href="/Usage.md#ondemand_rotation">on-demand rotation</a> for <em>nssm</em>
services with <a href="/Usage.md#io">I/O redirection</a> and
<a href="/Usage.md#online_rotation">online rotation</a> enabled.  <em>nssm</em>
accepts user-defined control 128 as a cue to begin output file rotation.
Non-<em>nssm</em> services might respond to control 128 in their own way (or
ignore it, or crash).</p>

<h3>Service editing</h3>
<p>As of version 2.22, <em>all</em> parameters understood by <em>nssm</em> can
be queried or configured on the command line.  A subset of system parameters
can also be queried and, in some cases, modified.</p>

<h4>General syntax</h4>
<p>Parameters can usually be queried as follows.</p>

<pre class="code">nssm get &lt;servicename&gt; &lt;parameter&gt;</pre>

<p>Some parameters are ambiguous and require a subparameter.  See
<a href="#exceptions">below</a>.</p>

<pre class="code">nssm get &lt;servicename&gt; &lt;parameter&gt; &lt;subparameter&gt;</pre>

<p>Parameters can usually be set in a similar way.</p>

<pre class="code">nssm set &lt;servicename&gt; &lt;parameter&gt; &lt;value&gt;</pre>

<pre class="code">nssm set &lt;servicename&gt; &lt;parameter&gt; &lt;subparameter&gt; &lt;value&gt;</pre>

<p>Most parameters can be reset to their defaults, which is equivalent to
removing the associated registry entry.</p>

<pre class="code">nssm reset &lt;servicename&gt; &lt;parameter&gt;</pre>

<pre class="code">nssm reset &lt;servicename&gt; &lt;parameter&gt; &lt;subparameter&gt;</pre>

<p>As a convenience, <em>nssm</em> will accept additional arguments beyond the
<code>value</code> required, and concatenate them together, separated by
single spaces.  Thus the following two invocations are identical:</p>

<pre class="code">nssm set &lt;servicename&gt; AppParameters <strong>&quot;-classpath C:\Classes&quot;</strong></pre>

<pre class="code">nssm set &lt;servicename&gt; AppParameters <strong>-classpath C:\Classes</strong></pre>

<h4>Parameters</h4>
<p>A <code>parameter</code> is usually a string with the same name as the
registry entry which controls the associated functionality.  So, for example,
the following command sets the startup directory for a service:</p>

<pre class="code">nssm set &lt;servicename&gt; <strong>AppDirectory</strong> &lt;path&gt;</pre>

<h4>Values</h4>
<p>Most parameters are configured by setting the same value as is
<a href="/Usage.md">documented</a> for the associated registry entry.  To enable
<a href="/Usage.md#rotation">file rotation</a>, for example, you would use the
following command:</p>

<pre class="code">nssm set &lt;servicename&gt; AppRotation <strong>1</strong></pre>

<p>See <a href="#exceptions">below</a> for a list of parameters whose values are
set differently.</p>

<h4>Native parameters</h4>
<p>Certain parameters configure properties of the service itself rather than
the behaviour of <em>nssm</em>.  They too are named after their associated
registry values.</p>

<ul>
<li><p><strong>DependOnGroup:</strong> Load order groups whose members must
start before the service can start.</p></li>
<li><p><strong>DependOnService:</strong> Services which must start before the
service can start.</p></li>
<li><p><strong>Description:</strong> The service's description</p></li>
<li><p><strong>DisplayName:</strong> The service's display name, eg
<em>Application Layer Gateway Service</em>.  This is the name shown under the
<em>Name</em> column in <em>services.msc</em>.</p></li>
<li><p><strong>ImagePath:</strong> Path to the service executable, eg
<em>C:\Windows\System32\alg.exe</em>.  For <em>nssm</em> services, this will be
the path to <em>nssm.exe</em>.</p></li>
<li><p><strong>ObjectName:</strong> The name of the user account under which
the service runs.  The default is <em>LOCALSYSTEM</em>.</p></li>
<li><p><strong>Name:</strong> The service key name, eg <em>ALG</em>.  The key
name cannot be changed.  You can use <code>nssm get &lt;displayname&gt; Name</code>
to find out the key name of a service.</p></li>
<li><p><strong>Start:</strong> The service's startup type, eg
<em>Automatic</em>.</p></li>
<li><p><strong>Type:</strong> The service type.  <em>nssm</em> can only edit
services of type <code>SERVICE_WIN32_OWN_PROCESS</code>.</p></li>
</ul>

<a name="exceptions"></a>
<h4>Non-standard parameters</h4>
<ul>
<li><p>When used with <code>nssm get</code>,
<strong><a href="/Usage.md#environment">AppEnvironment</a></strong> and
<strong>AppEnvironmentExtra</strong> accept an optional subparameter.  If no
subparameter is given, <code>nssm get</code> will print all configured
environment variables, one per line in the form <em>KEY=VALUE</em>.  If a
subparameter is given, <code>nssm get</code> will print the value configured
for the named environment variable, or the empty string if that variable is not
present in the environment block.</p>

<p>For example, suppose that <strong>AppEnvironmentExtra</strong> were
configured with two variables, <em>CLASSPATH=C:\Classes</em> and
<em>TEMP=C:\Temp</em>.  The following invocation:</p>

<pre class="code">nssm get &lt;servicename&gt; <strong>AppEnvironmentExtra</strong></pre>

<p class="noindent">would print:</p>

<pre class="code">CLASSPATH=C:\Classes
TEMP=C:\Temp</pre>

<p>Whereas the syntax below:</p>

<pre class="code">nssm get &lt;servicename&gt; AppEnvironmentExtra <strong>CLASSPATH</strong></pre>

<p class="noindent">would print:</p>

<pre class="code">C:\Classes</pre>

<p>When setting an environment block with <code>nssm set</code>, each variable
should be specified as a <em>KEY=VALUE</em> pair in a separate argument.  For
example:</p>

<pre class="code">nssm set &lt;servicename&gt; AppEnvironmentExtra <strong>CLASSPATH=C:\Classes TEMP=C:\Temp</strong></pre></li>

<li><p>The <strong><a href="/Usage.md#exit">AppExit</a></strong> parameter requires
a subparameter specifying the exit code to get or set.  The default action can
be specified with the string <em>Default</em>.</p>

<p>For example, to get the default exit action for a service you should run:</p>

<pre class="code">nssm get &lt;servicename&gt; AppExit <strong>Default</strong></pre>

<p>To get the exit action when the application exits with exit code 2, run:</p>

<pre class="code">nssm get &lt;servicename&gt; AppExit <strong>2</strong></pre>

<p>Note that if no explicit action is configured for a specified exit code,
<em>nssm</em> will print the default exit action.</p>

<p>To set configure the service to stop when the application exits with an exit
code of 2, run:</p>

<pre class="code">nssm set &lt;servicename&gt; AppExit 2 <strong>Exit</strong></pre></li>

<li><p>The <strong><a href="/Usage.md#process">AppPriority</a></strong> parameter
takes a priority class constant as specified in the
<code>SetPriorityClass()</code> documentation.  Valid priorities are:</p>
<ul>
<li><em>REALTIME_PRIORITY_CLASS</em></li>
<li><em>HIGH_PRIORITY_CLASS</em></li>
<li><em>ABOVE_NORMAL_PRIORITY_CLASS</em></li>
<li><em>NORMAL_PRIORITY_CLASS</em></li>
<li><em>BELOW_NORMAL_PRIORITY_CLASS</em></li>
<li><em>IDLE_PRIORITY_CLASS</em></li>
</ul></li>
</ul>

<h4>Non-standard native parameters</h4>
<ul>
<li><p>When used with <code>nssm set</code>, the <strong>DependOnGroup</strong>
and <strong>DependOnService</strong> parameters treat each subsequent command
line argument as a dependency group or service.</p>
<p>Groups can be specified with or without the <code>SC_GROUP_IDENTIFIER</code>
prefix (the <em>+</em> symbol).  Services can be specified via their key name
or display name.</p>
<p>The following two invocations are equivalent:</p>

<pre class="code">nssm set &lt;servicename&gt; DependOnService RpcSS LanmanWorkstation</pre>

<pre class="code">nssm set &lt;servicename&gt; DependOnService &quot;Remote Procedure Call (RPC)&quot; LanmanWorkstation</pre>

<p>Groups will always be prefixed by the <code>SC_GROUP_IDENTIFIER</code> when
queried with <code>nssm get</code>.</p></li>

<li><p>When used with <code>nssm set</code>, the <strong>ObjectName</strong>
parameter requires an additional argument specifying the password of the user
which will run the service.</p>

<p>To retrieve the username, run:</p>

<pre class="code">nssm get &lt;servicename&gt; <strong>ObjectName</strong></pre>

<p>To set the username and password, run:</p>

<pre class="code">nssm set &lt;servicename&gt; ObjectName <strong>&lt;username&gt; &lt;password&gt;</strong></pre>

<p>Note that the rules of argument concatenation still apply.  The following
invocation will have the expected effect:</p>

<pre class="code">nssm set &lt;servicename&gt; ObjectName &lt;username&gt; <strong>correct horse battery staple</strong></pre></li>

<p>If you absolutely must configure an account with a blank password, run:</p>

<pre class="code">nssm set &lt;servicename&gt; ObjectName &lt;username&gt; <strong>&quot;&quot;</strong></pre>

<li><p>Valid values for the <strong>Start</strong> parameter are:</p>
<ul>
<li><em>SERVICE_AUTO_START:</em> Automatic startup at boot.</li>
<li><em>SERVICE_DELAYED_AUTO_START:</em> Delayed startup at boot.</li>
<li><em>SERVICE_DEMAND_START:</em> Manual startup.</li>
<li><em>SERVICE_DISABLED:</em> Service is disabled.</li>
</ul>

<p>Note that <em>SERVICE_DELAYED_AUTO_START</em> is not supported on versions of
Windows prior to Vista.  <em>nssm</em> will set the service to automatic
startup if delayed start is unavailable.</p>

<li><p>The <strong>Type</strong> parameter is used to query or set the service
type.  <em>nssm</em> recognises all currently documented service types but will
only allow setting one of two types:</p>
<ul>
<li><em>SERVICE_WIN32_OWN_PROCESS:</em> A standalone service.  This is the
default.</li>
<li><em>SERVICE_INTERACTIVE_PROCESS:</em> A service which can interact with the
desktop.</li>
</ul>

<p>A service may only be configured as interactive if it runs under the
<em>LOCALSYSTEM</em> account.  To guarantee success when attempting to configure
an interactive service, run two commands in sequence:</p>

<pre class="code">nssm <strong>reset</strong> &lt;servicename&gt; ObjectName
nssm set &lt;servicename&gt; Type <strong>SERVICE_INTERACTIVE_PROCESS</strong></pre></li>
</ul>
