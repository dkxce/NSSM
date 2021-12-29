//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: NSSM_MESSAGE_USAGE
//
// MessageText:
//
// NSSM: The non-sucking service manager
// Version %s %s, %s
// Usage: nssm <option> [<args> ...]
// 
// To show service installation GUI:
// 
//         nssm install [<servicename>]
// 
// To install a service without confirmation:
// 
//         nssm install <servicename> <app> [<args> ...]
// 
// To show service editing GUI:
// 
//         nssm edit <servicename>
// 
// To retrieve or edit service parameters directly:
// 
//         nssm dump <servicename>
// 
//         nssm get <servicename> <parameter> [<subparameter>]
// 
//         nssm set <servicename> <parameter> [<subparameter>] <value>
// 
//         nssm reset <servicename> <parameter> [<subparameter>]
// 
// To show service removal GUI:
// 
//         nssm remove [<servicename>]
// 
// To remove a service without confirmation:
// 
//         nssm remove <servicename> confirm
// 
// To manage a service:
// 
//         nssm start <servicename>
// 
//         nssm stop <servicename>
// 
//         nssm restart <servicename>
// 
//         nssm status <servicename>
// 
//         nssm statuscode <servicename>
// 
//         nssm rotate <servicename>
// 
//         nssm processes <servicename>
//
#define NSSM_MESSAGE_USAGE               0x400001F5L

//
// MessageId: NSSM_MESSAGE_NOT_ADMINISTRATOR_CANNOT_INSTALL
//
// MessageText:
//
// Administrator access is needed to install a service.
//
#define NSSM_MESSAGE_NOT_ADMINISTRATOR_CANNOT_INSTALL 0x400001F6L

//
// MessageId: NSSM_MESSAGE_NOT_ADMINISTRATOR_CANNOT_EDIT
//
// MessageText:
//
// Administrator access is needed to edit a service.
//
#define NSSM_MESSAGE_NOT_ADMINISTRATOR_CANNOT_EDIT 0x400001F7L

//
// MessageId: NSSM_MESSAGE_NOT_ADMINISTRATOR_CANNOT_REMOVE
//
// MessageText:
//
// Administrator access is needed to remove a service.
//
#define NSSM_MESSAGE_NOT_ADMINISTRATOR_CANNOT_REMOVE 0x400001F8L

//
// MessageId: NSSM_MESSAGE_PRE_REMOVE_SERVICE
//
// MessageText:
//
// To remove a service without confirmation: nssm remove <servicename> confirm
//
#define NSSM_MESSAGE_PRE_REMOVE_SERVICE  0x400001F9L

//
// MessageId: NSSM_MESSAGE_OUT_OF_MEMORY
//
// MessageText:
//
// Out of memory for %s in %s!
//
#define NSSM_MESSAGE_OUT_OF_MEMORY       0xC00001FAL

//
// MessageId: NSSM_MESSAGE_OPEN_SERVICE_MANAGER_FAILED
//
// MessageText:
//
// Error opening service manager!
//
#define NSSM_MESSAGE_OPEN_SERVICE_MANAGER_FAILED 0x400001FBL

//
// MessageId: NSSM_MESSAGE_QUERYSERVICECONFIG_FAILED
//
// MessageText:
//
// Error querying service "%s"!
// QueryServiceConfig(): %s
//
#define NSSM_MESSAGE_QUERYSERVICECONFIG_FAILED 0x400001FCL

//
// MessageId: NSSM_MESSAGE_QUERYSERVICECONFIG2_FAILED
//
// MessageText:
//
// Error querying service "%s"!
// QueryServiceConfig2(%s): %s
//
#define NSSM_MESSAGE_QUERYSERVICECONFIG2_FAILED 0x400001FDL

//
// MessageId: NSSM_MESSAGE_INVALID_SERVICE
//
// MessageText:
//
// Service "%s" is not a valid %s service!
// Executable is %s
//
#define NSSM_MESSAGE_INVALID_SERVICE     0x400001FEL

//
// MessageId: NSSM_MESSAGE_CANNOT_EDIT
//
// MessageText:
//
// Service "%s" is not a %s service!
//
#define NSSM_MESSAGE_CANNOT_EDIT         0x400001FFL

//
// MessageId: NSSM_MESSAGE_PATH_TOO_LONG
//
// MessageText:
//
// The full path to %s is too long!
//
#define NSSM_MESSAGE_PATH_TOO_LONG       0x40000200L

//
// MessageId: NSSM_MESSAGE_FLAGS_TOO_LONG
//
// MessageText:
//
// The program flags are too long!
//
#define NSSM_MESSAGE_FLAGS_TOO_LONG      0x40000201L

//
// MessageId: NSSM_MESSAGE_OUT_OF_MEMORY_FOR_IMAGEPATH
//
// MessageText:
//
// Out of memory for ImagePath!
//
#define NSSM_MESSAGE_OUT_OF_MEMORY_FOR_IMAGEPATH 0x40000202L

//
// MessageId: NSSM_MESSAGE_CREATESERVICE_FAILED
//
// MessageText:
//
// Error creating service!
// CreateService(): %s
//
#define NSSM_MESSAGE_CREATESERVICE_FAILED 0x40000203L

//
// MessageId: NSSM_MESSAGE_GRANTED_LOGON_AS_SERVICE
//
// MessageText:
//
// The "Log on as a service" right was granted to account %s.
//
#define NSSM_MESSAGE_GRANTED_LOGON_AS_SERVICE 0x40000204L

//
// MessageId: NSSM_MESSAGE_GRANT_LOGON_AS_SERVICE_FAILED
//
// MessageText:
//
// Failed to grant the "Log on as a service" right to account %s!
//
#define NSSM_MESSAGE_GRANT_LOGON_AS_SERVICE_FAILED 0x40000205L

//
// MessageId: NSSM_MESSAGE_LSAOPENPOLICY_FAILED
//
// MessageText:
//
// LsaOpenPolicy(): %s
//
#define NSSM_MESSAGE_LSAOPENPOLICY_FAILED 0x40000206L

//
// MessageId: NSSM_MESSAGE_LSALOOKUPNAMES_FAILED
//
// MessageText:
//
// Failed to look up the SID for username %s!
// LsaLookupNames(): %s
//
#define NSSM_MESSAGE_LSALOOKUPNAMES_FAILED 0x40000207L

//
// MessageId: NSSM_MESSAGE_INITIALIZESID_FAILED
//
// MessageText:
//
// Failed to initialise the SID for username %s!
// InitializeSid(): %s
//
#define NSSM_MESSAGE_INITIALIZESID_FAILED 0x40000208L

//
// MessageId: NSSM_MESSAGE_LSAENUMERATEACCOUNTRIGHTS_FAILED
//
// MessageText:
//
// Failed to check if %s has the "Log on as a service" right!
// LsaEnumerateAccountRights(): %s
//
#define NSSM_MESSAGE_LSAENUMERATEACCOUNTRIGHTS_FAILED 0x40000209L

//
// MessageId: NSSM_MESSAGE_LSAADDACCOUNTRIGHTS_FAILED
//
// MessageText:
//
// LsaAddAccountRights(): %s
//
#define NSSM_MESSAGE_LSAADDACCOUNTRIGHTS_FAILED 0x4000020AL

//
// MessageId: NSSM_MESSAGE_CHANGESERVICECONFIG_FAILED
//
// MessageText:
//
// Error editing service!
// ChangeServiceConfig(): %s
//
#define NSSM_MESSAGE_CHANGESERVICECONFIG_FAILED 0x4000020BL

//
// MessageId: NSSM_MESSAGE_SETVALUE_FAILED
//
// MessageText:
//
// Failed to write registry value %s:
// RegSetValueEx(): %s
//
#define NSSM_MESSAGE_SETVALUE_FAILED     0xC000020CL

//
// MessageId: NSSM_MESSAGE_REGDELETEVALUE_FAILED
//
// MessageText:
//
// Error deleting registry value %s for service "%s"!
// RegDeleteValue(): %s
//
#define NSSM_MESSAGE_REGDELETEVALUE_FAILED 0x4000020DL

//
// MessageId: NSSM_MESSAGE_INVALID_PARAMETER
//
// MessageText:
//
// Invalid parameter "%s".  Valid parameters are:
//
#define NSSM_MESSAGE_INVALID_PARAMETER   0x4000020EL

//
// MessageId: NSSM_MESSAGE_MISSING_SUBPARAMETER
//
// MessageText:
//
// Parameter "%s" requires a subparameter!
//
#define NSSM_MESSAGE_MISSING_SUBPARAMETER 0x4000020FL

//
// MessageId: NSSM_MESSAGE_NATIVE_PARAMETER
//
// MessageText:
//
// Parameter "%s" is only valid for services managed by %s!
//
#define NSSM_MESSAGE_NATIVE_PARAMETER    0x40000210L

//
// MessageId: NSSM_MESSAGE_NO_DEFAULT_VALUE
//
// MessageText:
//
// Parameter "%s" has no meaningful default value!
//
#define NSSM_MESSAGE_NO_DEFAULT_VALUE    0x40000211L

//
// MessageId: NSSM_MESSAGE_GET_SETTING_FAILED
//
// MessageText:
//
// Error getting parameter "%s" for service "%s"!
//
#define NSSM_MESSAGE_GET_SETTING_FAILED  0x40000212L

//
// MessageId: NSSM_MESSAGE_SET_SETTING_FAILED
//
// MessageText:
//
// Error setting parameter "%s" for service "%s"!
//
#define NSSM_MESSAGE_SET_SETTING_FAILED  0x40000213L

//
// MessageId: NSSM_MESSAGE_SET_SETTING
//
// MessageText:
//
// Set parameter "%s" for service "%s".
//
#define NSSM_MESSAGE_SET_SETTING         0x40000214L

//
// MessageId: NSSM_MESSAGE_RESET_SETTING
//
// MessageText:
//
// Reset parameter "%s" for service "%s" to its default.
//
#define NSSM_MESSAGE_RESET_SETTING       0x40000215L

//
// MessageId: NSSM_MESSAGE_INVALID_EXIT_ACTION
//
// MessageText:
//
// Invalid exit action "%s".  Valid exit actions are:
//
#define NSSM_MESSAGE_INVALID_EXIT_ACTION 0x40000216L

//
// MessageId: NSSM_MESSAGE_INVALID_SERVICE_TYPE
//
// MessageText:
//
// Invalid service type "%s".  Valid types are:
//
#define NSSM_MESSAGE_INVALID_SERVICE_TYPE 0x40000217L

//
// MessageId: NSSM_MESSAGE_SERVICE_CONFIG_DELAYED_AUTO_START_INFO_FAILED
//
// MessageText:
//
// Error configuring delayed startup for service "%s".  The service will start automatically.
// ChangeServiceConfig2(): %s
//
#define NSSM_MESSAGE_SERVICE_CONFIG_DELAYED_AUTO_START_INFO_FAILED 0x40000218L

//
// MessageId: NSSM_MESSAGE_INVALID_SERVICE_STARTUP
//
// MessageText:
//
// Invalid startup type "%s".  Valid types are:
//
#define NSSM_MESSAGE_INVALID_SERVICE_STARTUP 0x40000219L

//
// MessageId: NSSM_MESSAGE_INVALID_PRIORITY
//
// MessageText:
//
// Invalid process priority "%s".  Valid priorities are:
//
#define NSSM_MESSAGE_INVALID_PRIORITY    0x4000021AL

//
// MessageId: NSSM_MESSAGE_MISSING_PASSWORD
//
// MessageText:
//
// Setting "%s" requires both a username and password!
//
#define NSSM_MESSAGE_MISSING_PASSWORD    0x4000021BL

//
// MessageId: NSSM_MESSAGE_INTERACTIVE_NOT_LOCALSYSTEM
//
// MessageText:
//
// Service type "%s" is invalid for service "%s".
// Only services running under the %s account may be interactive.
//
#define NSSM_MESSAGE_INTERACTIVE_NOT_LOCALSYSTEM 0x4000021CL

//
// MessageId: NSSM_MESSAGE_CREATE_PARAMETERS_FAILED
//
// MessageText:
//
// Error setting startup parameters for the service!
//
#define NSSM_MESSAGE_CREATE_PARAMETERS_FAILED 0x4000021DL

//
// MessageId: NSSM_MESSAGE_SERVICE_INSTALLED
//
// MessageText:
//
// Service "%s" installed successfully!
//
#define NSSM_MESSAGE_SERVICE_INSTALLED   0x4000021EL

//
// MessageId: NSSM_MESSAGE_OPENSERVICE_FAILED
//
// MessageText:
//
// Can't open service!
// OpenService(): %s
//
#define NSSM_MESSAGE_OPENSERVICE_FAILED  0x4000021FL

//
// MessageId: NSSM_MESSAGE_ENUMSERVICESSTATUS_FAILED
//
// MessageText:
//
// Can't open service!
// EnumServicesStatus(): %s
//
#define NSSM_MESSAGE_ENUMSERVICESSTATUS_FAILED 0x40000220L

//
// MessageId: NSSM_MESSAGE_DELETESERVICE_FAILED
//
// MessageText:
//
// Error deleting service!
//
#define NSSM_MESSAGE_DELETESERVICE_FAILED 0x40000221L

//
// MessageId: NSSM_MESSAGE_SERVICE_REMOVED
//
// MessageText:
//
// Service "%s" removed successfully!
//
#define NSSM_MESSAGE_SERVICE_REMOVED     0x40000222L

//
// MessageId: NSSM_MESSAGE_SERVICE_EDITED
//
// MessageText:
//
// Service "%s" edited successfully!
//
#define NSSM_MESSAGE_SERVICE_EDITED      0x40000223L

//
// MessageId: NSSM_MESSAGE_CANNOT_RENAME_SERVICE
//
// MessageText:
//
// Services cannot be renamed!
//
#define NSSM_MESSAGE_CANNOT_RENAME_SERVICE 0x40000224L

//
// MessageId: NSSM_MESSAGE_EFFECTIVE_AFFINITY_MASK
//
// MessageText:
//
// Requested processor affinity range %s is not appropriate.
// The maximal affinity range is %s on this system.
// The requested affinity will be written to the registry as-is.
// Note, however, that the effective affinity will be %s.
//
#define NSSM_MESSAGE_EFFECTIVE_AFFINITY_MASK 0x40000225L

//
// MessageId: NSSM_MESSAGE_BOGUS_AFFINITY_MASK
//
// MessageText:
//
// Affinity specification "%s" is invalid.
// Valid specifications are of the form "0-2,4-6,10,15"
// Identifiers must be in the range 0-%d on this system.
//
#define NSSM_MESSAGE_BOGUS_AFFINITY_MASK 0x40000226L

//
// MessageId: NSSM_MESSAGE_BAD_CONTROL_RESPONSE
//
// MessageText:
//
// %s: Unexpected status %s in response to %s control.
//
#define NSSM_MESSAGE_BAD_CONTROL_RESPONSE 0x40000227L

//
// MessageId: NSSM_MESSAGE_LSALOOKUPSIDS_FAILED
//
// MessageText:
//
// Failed to look up the username for SID.
// LsaLookupSids(): %s
//
#define NSSM_MESSAGE_LSALOOKUPSIDS_FAILED 0x40000228L

//
// MessageId: NSSM_MESSAGE_CREATEWELLKNOWNSID_FAILED
//
// MessageText:
//
// Failed to create %s SID!
//
#define NSSM_MESSAGE_CREATEWELLKNOWNSID_FAILED 0x40000229L

//
// MessageId: NSSM_MESSAGE_INVALID_HOOK_EVENT
//
// MessageText:
//
// Invalid hook event.  Valid hook events are:
//
#define NSSM_MESSAGE_INVALID_HOOK_EVENT  0x4000022AL

//
// MessageId: NSSM_MESSAGE_INVALID_HOOK_ACTION
//
// MessageText:
//
// Invalid hook action for event %s.  Valid hook actions are:
//
#define NSSM_MESSAGE_INVALID_HOOK_ACTION 0x4000022BL

//
// MessageId: NSSM_MESSAGE_INVALID_HOOK_NAME
//
// MessageText:
//
// Invalid hook name.  Names should be specified in the form <event>/<action>.
//
#define NSSM_MESSAGE_INVALID_HOOK_NAME   0x4000022CL

//
// MessageId: NSSM_GUI_CREATEDIALOG_FAILED
//
// MessageText:
//
// CreateDialog() failed:
// %s
//
#define NSSM_GUI_CREATEDIALOG_FAILED     0x4000022DL

//
// MessageId: NSSM_GUI_MISSING_SERVICE_NAME
//
// MessageText:
//
// No valid service name was specified!
//
#define NSSM_GUI_MISSING_SERVICE_NAME    0x4000022EL

//
// MessageId: NSSM_GUI_MISSING_PATH
//
// MessageText:
//
// No valid executable path was specified!
//
#define NSSM_GUI_MISSING_PATH            0x4000022FL

//
// MessageId: NSSM_GUI_INVALID_OPTIONS
//
// MessageText:
//
// No valid arguments were specified!
//
#define NSSM_GUI_INVALID_OPTIONS         0x40000230L

//
// MessageId: NSSM_GUI_MISSING_USERNAME
//
// MessageText:
//
// Missing account name!
//
#define NSSM_GUI_MISSING_USERNAME        0x40000231L

//
// MessageId: NSSM_GUI_INVALID_USERNAME
//
// MessageText:
//
// Invalid account name!
//
#define NSSM_GUI_INVALID_USERNAME        0x40000232L

//
// MessageId: NSSM_GUI_MISSING_PASSWORD
//
// MessageText:
//
// Missing or mismatched password(s)!
//
#define NSSM_GUI_MISSING_PASSWORD        0x40000233L

//
// MessageId: NSSM_GUI_INVALID_PASSWORD
//
// MessageText:
//
// Invalid password!
//
#define NSSM_GUI_INVALID_PASSWORD        0x40000234L

//
// MessageId: NSSM_GUI_INVALID_DISPLAYNAME
//
// MessageText:
//
// Invalid displayname!
//
#define NSSM_GUI_INVALID_DISPLAYNAME     0x40000235L

//
// MessageId: NSSM_GUI_INVALID_DESCRIPTION
//
// MessageText:
//
// Invalid description!
//
#define NSSM_GUI_INVALID_DESCRIPTION     0x40000236L

//
// MessageId: NSSM_GUI_OUT_OF_MEMORY_FOR_IMAGEPATH
//
// MessageText:
//
// Error constructing ImagePath!\nThis really shouldn't happen.  You could be out of memory
// or the world may be about to end or something equally bad.
//
#define NSSM_GUI_OUT_OF_MEMORY_FOR_IMAGEPATH 0x40000237L

//
// MessageId: NSSM_GUI_INVALID_ENVIRONMENT
//
// MessageText:
//
// Environment should comprise strings of the form KEY=VALUE.
//
#define NSSM_GUI_INVALID_ENVIRONMENT     0x40000238L

//
// MessageId: NSSM_GUI_INVALID_DEPENDENCIES
//
// MessageText:
//
// Invalid dependencies!
//
#define NSSM_GUI_INVALID_DEPENDENCIES    0x40000239L

//
// MessageId: NSSM_GUI_INSTALL_SERVICE_FAILED
//
// MessageText:
//
// Couldn't create service!
// Perhaps it is already installed...
//
#define NSSM_GUI_INSTALL_SERVICE_FAILED  0x4000023AL

//
// MessageId: NSSM_GUI_CREATE_PARAMETERS_FAILED
//
// MessageText:
//
// Couldn't set startup parameters for the service!
// Deleting the service...
//
#define NSSM_GUI_CREATE_PARAMETERS_FAILED 0x4000023BL

//
// MessageId: NSSM_GUI_EDIT_PARAMETERS_FAILED
//
// MessageText:
//
// Couldn't set startup parameters for the service!
//
#define NSSM_GUI_EDIT_PARAMETERS_FAILED  0x4000023CL

//
// MessageId: NSSM_GUI_ASK_REMOVE_SERVICE
//
// MessageText:
//
// Remove the service?
//
#define NSSM_GUI_ASK_REMOVE_SERVICE      0x4000023DL

//
// MessageId: NSSM_GUI_SERVICE_NOT_INSTALLED
//
// MessageText:
//
// Can't open service!
// Perhaps it isn't installed...
//
#define NSSM_GUI_SERVICE_NOT_INSTALLED   0x4000023EL

//
// MessageId: NSSM_GUI_REMOVE_SERVICE_FAILED
//
// MessageText:
//
// Can't delete service!  Make sure the service is stopped and try again.
// If this error persists, you may need to set the service NOT to start
// automatically, reboot your computer and try removing it again.
//
#define NSSM_GUI_REMOVE_SERVICE_FAILED   0x4000023FL

//
// MessageId: NSSM_GUI_BROWSE_FILTER_APPLICATIONS
//
// MessageText:
//
// Applications%0
//
#define NSSM_GUI_BROWSE_FILTER_APPLICATIONS 0x40000240L

//
// MessageId: NSSM_GUI_BROWSE_FILTER_DIRECTORIES
//
// MessageText:
//
// Directories%0
//
#define NSSM_GUI_BROWSE_FILTER_DIRECTORIES 0x40000241L

//
// MessageId: NSSM_GUI_BROWSE_FILTER_ALL_FILES
//
// MessageText:
//
// All files%0
//
#define NSSM_GUI_BROWSE_FILTER_ALL_FILES 0x40000242L

//
// MessageId: NSSM_GUI_BROWSE_TITLE
//
// MessageText:
//
// Locate application file
//
#define NSSM_GUI_BROWSE_TITLE            0x40000243L

//
// MessageId: NSSM_GUI_TAB_APPLICATION
//
// MessageText:
//
// Application%0
//
#define NSSM_GUI_TAB_APPLICATION         0x40000244L

//
// MessageId: NSSM_GUI_TAB_NATIVE
//
// MessageText:
//
// Service%0
//
#define NSSM_GUI_TAB_NATIVE              0x40000245L

//
// MessageId: NSSM_GUI_TAB_DETAILS
//
// MessageText:
//
// Details%0
//
#define NSSM_GUI_TAB_DETAILS             0x40000246L

//
// MessageId: NSSM_GUI_TAB_LOGON
//
// MessageText:
//
// Log on%0
//
#define NSSM_GUI_TAB_LOGON               0x40000247L

//
// MessageId: NSSM_GUI_TAB_DEPENDENCIES
//
// MessageText:
//
// Dependencies%0
//
#define NSSM_GUI_TAB_DEPENDENCIES        0x40000248L

//
// MessageId: NSSM_GUI_TAB_PROCESS
//
// MessageText:
//
// Process%0
//
#define NSSM_GUI_TAB_PROCESS             0x40000249L

//
// MessageId: NSSM_GUI_TAB_SHUTDOWN
//
// MessageText:
//
// Shutdown%0
//
#define NSSM_GUI_TAB_SHUTDOWN            0x4000024AL

//
// MessageId: NSSM_GUI_TAB_EXIT
//
// MessageText:
//
// Exit actions%0
//
#define NSSM_GUI_TAB_EXIT                0x4000024BL

//
// MessageId: NSSM_GUI_TAB_IO
//
// MessageText:
//
// I/O%0
//
#define NSSM_GUI_TAB_IO                  0x4000024CL

//
// MessageId: NSSM_GUI_TAB_ROTATION
//
// MessageText:
//
// File rotation%0
//
#define NSSM_GUI_TAB_ROTATION            0x4000024DL

//
// MessageId: NSSM_GUI_TAB_ENVIRONMENT
//
// MessageText:
//
// Environment%0
//
#define NSSM_GUI_TAB_ENVIRONMENT         0x4000024EL

//
// MessageId: NSSM_GUI_TAB_HOOKS
//
// MessageText:
//
// Hooks%0
//
#define NSSM_GUI_TAB_HOOKS               0x4000024FL

//
// MessageId: NSSM_GUI_STARTUP_AUTOMATIC
//
// MessageText:
//
// Automatic%0
//
#define NSSM_GUI_STARTUP_AUTOMATIC       0x40000250L

//
// MessageId: NSSM_GUI_STARTUP_DELAYED
//
// MessageText:
//
// Automatic (Delayed Start)%0
//
#define NSSM_GUI_STARTUP_DELAYED         0x40000251L

//
// MessageId: NSSM_GUI_STARTUP_MANUAL
//
// MessageText:
//
// Manual%0
//
#define NSSM_GUI_STARTUP_MANUAL          0x40000252L

//
// MessageId: NSSM_GUI_STARTUP_DISABLED
//
// MessageText:
//
// Disabled%0
//
#define NSSM_GUI_STARTUP_DISABLED        0x40000253L

//
// MessageId: NSSM_GUI_EXIT_RESTART
//
// MessageText:
//
// Restart application%0
//
#define NSSM_GUI_EXIT_RESTART            0x40000254L

//
// MessageId: NSSM_GUI_EXIT_IGNORE
//
// MessageText:
//
// No action (srvany compatible)%0
//
#define NSSM_GUI_EXIT_IGNORE             0x40000255L

//
// MessageId: NSSM_GUI_EXIT_REALLY
//
// MessageText:
//
// Stop service (oneshot mode)%0
//
#define NSSM_GUI_EXIT_REALLY             0x40000256L

//
// MessageId: NSSM_GUI_EXIT_UNCLEAN
//
// MessageText:
//
// Fake crash (pre-Vista)%0
//
#define NSSM_GUI_EXIT_UNCLEAN            0x40000257L

//
// MessageId: NSSM_GUI_REALTIME_PRIORITY_CLASS
//
// MessageText:
//
// Realtime%0
//
#define NSSM_GUI_REALTIME_PRIORITY_CLASS 0x40000258L

//
// MessageId: NSSM_GUI_HIGH_PRIORITY_CLASS
//
// MessageText:
//
// High%0
//
#define NSSM_GUI_HIGH_PRIORITY_CLASS     0x40000259L

//
// MessageId: NSSM_GUI_ABOVE_NORMAL_PRIORITY_CLASS
//
// MessageText:
//
// Above normal%0
//
#define NSSM_GUI_ABOVE_NORMAL_PRIORITY_CLASS 0x4000025AL

//
// MessageId: NSSM_GUI_NORMAL_PRIORITY_CLASS
//
// MessageText:
//
// Normal%0
//
#define NSSM_GUI_NORMAL_PRIORITY_CLASS   0x4000025BL

//
// MessageId: NSSM_GUI_BELOW_NORMAL_PRIORITY_CLASS
//
// MessageText:
//
// Below normal%0
//
#define NSSM_GUI_BELOW_NORMAL_PRIORITY_CLASS 0x4000025CL

//
// MessageId: NSSM_GUI_IDLE_PRIORITY_CLASS
//
// MessageText:
//
// Low%0
//
#define NSSM_GUI_IDLE_PRIORITY_CLASS     0x4000025DL

//
// MessageId: NSSM_GUI_WARN_AFFINITY
//
// MessageText:
//
// The service is configured with a processor affinity range which
// specifies more CPUs than are present on this system.  Editing the
// service will result in additional CPUs being removed.
//
#define NSSM_GUI_WARN_AFFINITY           0x4000025EL

//
// MessageId: NSSM_GUI_WARN_AFFINITY_NONE
//
// MessageText:
//
// No CPUs selected!
//
#define NSSM_GUI_WARN_AFFINITY_NONE      0x4000025FL

//
// MessageId: NSSM_GUI_WARN_STDIO
//
// MessageText:
//
// The service is configured with I/O redirection settings which cannot be
// represented by this GUI's simplified set of options.  Check the registry
// after editing the service to confirm its I/O redirection settings.
//
#define NSSM_GUI_WARN_STDIO              0x40000260L

//
// MessageId: NSSM_GUI_WARN_ROTATE_BYTES
//
// MessageText:
//
// The service is configured with a 64-bit file size threshold for file
// rotation.  This GUI can only display 32-bit settings.  Check the registry
// after editing the service to confirm its file rotation settings.
//
#define NSSM_GUI_WARN_ROTATE_BYTES       0x40000261L

//
// MessageId: NSSM_GUI_WARN_ENVIRONMENT
//
// MessageText:
//
// The service is configured with a srvany-compatible environment block
// for the application as well as an extra environment block.  This GUI
// can only display one such block.  Editing the service will result in
// one of the environment blocks being deleted.
//
#define NSSM_GUI_WARN_ENVIRONMENT        0x40000262L

//
// MessageId: NSSM_GUI_AFFINITY_CPU
//
// MessageText:
//
// CPU%0
//
#define NSSM_GUI_AFFINITY_CPU            0x40000263L

//
// MessageId: NSSM_GUI_HOOK_EVENT_START
//
// MessageText:
//
// Application start%0
//
#define NSSM_GUI_HOOK_EVENT_START        0x40000264L

//
// MessageId: NSSM_GUI_HOOK_EVENT_STOP
//
// MessageText:
//
// Service stop%0
//
#define NSSM_GUI_HOOK_EVENT_STOP         0x40000265L

//
// MessageId: NSSM_GUI_HOOK_EVENT_EXIT
//
// MessageText:
//
// Application exit%0
//
#define NSSM_GUI_HOOK_EVENT_EXIT         0x40000266L

//
// MessageId: NSSM_GUI_HOOK_EVENT_POWER
//
// MessageText:
//
// Power event%0
//
#define NSSM_GUI_HOOK_EVENT_POWER        0x40000267L

//
// MessageId: NSSM_GUI_HOOK_EVENT_ROTATE
//
// MessageText:
//
// Log rotation%0
//
#define NSSM_GUI_HOOK_EVENT_ROTATE       0x40000268L

//
// MessageId: NSSM_GUI_HOOK_ACTION_START_PRE
//
// MessageText:
//
// Before starting application%0
//
#define NSSM_GUI_HOOK_ACTION_START_PRE   0x40000269L

//
// MessageId: NSSM_GUI_HOOK_ACTION_START_POST
//
// MessageText:
//
// Successful application startup%0
//
#define NSSM_GUI_HOOK_ACTION_START_POST  0x4000026AL

//
// MessageId: NSSM_GUI_HOOK_ACTION_STOP_PRE
//
// MessageText:
//
// Before shutting down application%0
//
#define NSSM_GUI_HOOK_ACTION_STOP_PRE    0x4000026BL

//
// MessageId: NSSM_GUI_HOOK_ACTION_EXIT_POST
//
// MessageText:
//
// After application exits%0
//
#define NSSM_GUI_HOOK_ACTION_EXIT_POST   0x4000026CL

//
// MessageId: NSSM_GUI_HOOK_ACTION_POWER_CHANGE
//
// MessageText:
//
// Power setting change%0
//
#define NSSM_GUI_HOOK_ACTION_POWER_CHANGE 0x4000026DL

//
// MessageId: NSSM_GUI_HOOK_ACTION_POWER_RESUME
//
// MessageText:
//
// Resume from standby%0
//
#define NSSM_GUI_HOOK_ACTION_POWER_RESUME 0x4000026EL

//
// MessageId: NSSM_GUI_HOOK_ACTION_ROTATE_PRE
//
// MessageText:
//
// Before online log rotation%0
//
#define NSSM_GUI_HOOK_ACTION_ROTATE_PRE  0x4000026FL

//
// MessageId: NSSM_GUI_HOOK_ACTION_ROTATE_POST
//
// MessageText:
//
// After online log rotation%0
//
#define NSSM_GUI_HOOK_ACTION_ROTATE_POST 0x40000270L

//
// MessageId: NSSM_EVENT_DISPATCHER_FAILED
//
// MessageText:
//
// StartServiceCtrlDispatcher() failed:
// %1
//
#define NSSM_EVENT_DISPATCHER_FAILED     0xC00003E9L

//
// MessageId: NSSM_EVENT_OPENSCMANAGER_FAILED
//
// MessageText:
//
// Unable to connect to service manager!
// Perhaps you need to be an administrator...
//
#define NSSM_EVENT_OPENSCMANAGER_FAILED  0xC00003EAL

//
// MessageId: NSSM_EVENT_OUT_OF_MEMORY
//
// MessageText:
//
// Out of memory for %1 in %2!
//
#define NSSM_EVENT_OUT_OF_MEMORY         0xC00003EBL

//
// MessageId: NSSM_EVENT_GET_PARAMETERS_FAILED
//
// MessageText:
//
// Failed to get startup parameters for service %1.
//
#define NSSM_EVENT_GET_PARAMETERS_FAILED 0xC00003ECL

//
// MessageId: NSSM_EVENT_REGISTERSERVICECTRLHANDER_FAILED
//
// MessageText:
//
// RegisterServiceCtrlHandlerEx() failed:
// %1
//
#define NSSM_EVENT_REGISTERSERVICECTRLHANDER_FAILED 0xC00003EDL

//
// MessageId: NSSM_EVENT_START_SERVICE_FAILED
//
// MessageText:
//
// Can't start %1 for service %2.
// Error code: %3.
//
#define NSSM_EVENT_START_SERVICE_FAILED  0xC00003EEL

//
// MessageId: NSSM_EVENT_RESTART_SERVICE_FAILED
//
// MessageText:
//
// Failed to restart %1 for service %2.
// Sleeping...
//
#define NSSM_EVENT_RESTART_SERVICE_FAILED 0x800003EFL

//
// MessageId: NSSM_EVENT_STARTED_SERVICE
//
// MessageText:
//
// Started %1 %2 for service %3 in %4.
//
#define NSSM_EVENT_STARTED_SERVICE       0x400003F0L

//
// MessageId: NSSM_EVENT_REGISTERWAITFORSINGLEOBJECT_FAILED
//
// MessageText:
//
// Service %1 may claim to be still running when %2 exits.
// RegisterWaitForSingleObject() failed:
// %3
//
#define NSSM_EVENT_REGISTERWAITFORSINGLEOBJECT_FAILED 0x800003F1L

//
// MessageId: NSSM_EVENT_CREATEPROCESS_FAILED
//
// MessageText:
//
// Failed to start service %1.  Program %2 couldn't be launched.
// CreateProcess() failed:
// %3
//
#define NSSM_EVENT_CREATEPROCESS_FAILED  0xC00003F2L

//
// MessageId: NSSM_EVENT_TERMINATEPROCESS
//
// MessageText:
//
// Killing process %2 because service %1 is stopping.
//
#define NSSM_EVENT_TERMINATEPROCESS      0x400003F3L

//
// MessageId: NSSM_EVENT_PROCESS_ALREADY_STOPPED
//
// MessageText:
//
// Requested stop of service %1.  No action is required as program %2 is not running.
//
#define NSSM_EVENT_PROCESS_ALREADY_STOPPED 0x400003F4L

//
// MessageId: NSSM_EVENT_ENDED_SERVICE
//
// MessageText:
//
// Program %1 for service %2 exited with return code %3.
//
#define NSSM_EVENT_ENDED_SERVICE         0x400003F5L

//
// MessageId: NSSM_EVENT_EXIT_RESTART
//
// MessageText:
//
// Service %1 action for exit code %2 is %3.
// Attempting to restart %4.
//
#define NSSM_EVENT_EXIT_RESTART          0x400003F6L

//
// MessageId: NSSM_EVENT_EXIT_IGNORE
//
// MessageText:
//
// Service %1 action for exit code %2 is %3.
// No action will be taken to restart %4.
//
#define NSSM_EVENT_EXIT_IGNORE           0x400003F7L

//
// MessageId: NSSM_EVENT_EXIT_REALLY
//
// MessageText:
//
// Service %1 action for exit code %2 is %3.
// Exiting.
//
#define NSSM_EVENT_EXIT_REALLY           0x400003F8L

//
// MessageId: NSSM_EVENT_OPENKEY_FAILED
//
// MessageText:
//
// Failed to open registry key HKLM\%1:
// %2
//
#define NSSM_EVENT_OPENKEY_FAILED        0xC00003F9L

//
// MessageId: NSSM_EVENT_QUERYVALUE_FAILED
//
// MessageText:
//
// Failed to read registry value %1:
// %2
//
#define NSSM_EVENT_QUERYVALUE_FAILED     0xC00003FAL

//
// MessageId: NSSM_EVENT_SETVALUE_FAILED
//
// MessageText:
//
// Failed to write registry value %1:
// %2
//
#define NSSM_EVENT_SETVALUE_FAILED       0xC00003FBL

//
// MessageId: NSSM_EVENT_EXIT_UNCLEAN
//
// MessageText:
//
// Service %1 action for exit code %2 is %3.
// Exiting.
//
#define NSSM_EVENT_EXIT_UNCLEAN          0x400003FCL

//
// MessageId: NSSM_EVENT_GRACEFUL_SUICIDE
//
// MessageText:
//
// Service %1 application %2 exited with exit code 0 but the default exit action is %3.
// Honouring the %4 action would result in the service being flagged as failed and subject to recovery actions.
// The service will instead be stopped gracefully.  To suppress this message, explicitly configure the exit action for exit code 0 to either %5 or %6.
//
#define NSSM_EVENT_GRACEFUL_SUICIDE      0x400003FDL

//
// MessageId: NSSM_EVENT_EXPANDENVIRONMENTSTRINGS_FAILED
//
// MessageText:
//
// Failed to expand registry value %1:
// %2
//
#define NSSM_EVENT_EXPANDENVIRONMENTSTRINGS_FAILED 0xC00003FEL

//
// MessageId: NSSM_EVENT_KILLING
//
// MessageText:
//
// Killing process tree of process %2 for service %1 with exit code %3
//
#define NSSM_EVENT_KILLING               0x400003FFL

//
// MessageId: NSSM_EVENT_CREATETOOLHELP32SNAPSHOT_PROCESS_FAILED
//
// MessageText:
//
// Failed to create snapshot of running processes when terminating service %1:
// %2
//
#define NSSM_EVENT_CREATETOOLHELP32SNAPSHOT_PROCESS_FAILED 0xC0000400L

//
// MessageId: NSSM_EVENT_PROCESS_ENUMERATE_FAILED
//
// MessageText:
//
// Failed to enumerate running processes when terminating service %1:
// %2
//
#define NSSM_EVENT_PROCESS_ENUMERATE_FAILED 0xC0000401L

//
// MessageId: NSSM_EVENT_OPENPROCESS_FAILED
//
// MessageText:
//
// Failed to open process handle for process with PID %1 when terminating service %2:
// %3
//
#define NSSM_EVENT_OPENPROCESS_FAILED    0xC0000402L

//
// MessageId: NSSM_EVENT_KILL_PROCESS_TREE
//
// MessageText:
//
// Killing PID %1 in process tree of PID %2 because service %3 is stopping.
//
#define NSSM_EVENT_KILL_PROCESS_TREE     0x40000403L

//
// MessageId: NSSM_EVENT_TERMINATEPROCESS_FAILED
//
// MessageText:
//
// Failed to terminate process with PID %1 for service %2:
// %3
//
#define NSSM_EVENT_TERMINATEPROCESS_FAILED 0xC0000404L

//
// MessageId: NSSM_EVENT_NO_FLAGS
//
// MessageText:
//
// Registry key %1 is unset for service %2.
// No flags will be passed to %3 when it starts.
//
#define NSSM_EVENT_NO_FLAGS              0x80000405L

//
// MessageId: NSSM_EVENT_NO_DIR
//
// MessageText:
//
// Registry key %1 is unset for service %2.
// Assuming startup directory %3.
//
#define NSSM_EVENT_NO_DIR                0x80000406L

//
// MessageId: NSSM_EVENT_NO_DIR_AND_NO_FALLBACK
//
// MessageText:
//
// Registry key %1 is unset for service %2.
// Additionally, ExpandEnvironmentStrings("%%SYSTEMROOT%%") failed when trying to choose a fallback startup directory.
//
#define NSSM_EVENT_NO_DIR_AND_NO_FALLBACK 0xC0000407L

//
// MessageId: NSSM_EVENT_CREATETOOLHELP32SNAPSHOT_THREAD_FAILED
//
// MessageText:
//
// Failed to create snapshot of running threads when terminating service %1:
// %2
//
#define NSSM_EVENT_CREATETOOLHELP32SNAPSHOT_THREAD_FAILED 0xC0000408L

//
// MessageId: NSSM_EVENT_THREAD_ENUMERATE_FAILED
//
// MessageText:
//
// Failed to enumerate running threads when terminating service %1:
// %2
//
#define NSSM_EVENT_THREAD_ENUMERATE_FAILED 0xC0000409L

//
// MessageId: NSSM_EVENT_THROTTLED
//
// MessageText:
//
// Service %1 ran for less than %2 milliseconds.
// Restart will be delayed by %3 milliseconds.
//
#define NSSM_EVENT_THROTTLED             0x8000040AL

//
// MessageId: NSSM_EVENT_RESET_THROTTLE
//
// MessageText:
//
// Request to resume service %1.  Throttling of restart attempts will be reset.
//
#define NSSM_EVENT_RESET_THROTTLE        0x4000040BL

//
// MessageId: NSSM_EVENT_BOGUS_THROTTLE
//
// MessageText:
//
// The registry value %2, used to specify the minimum number of milliseconds which must elapse before service %1 is considered to have started successfully, was not of type REG_DWORD.  The default time of %3 milliseconds will be used.
//
#define NSSM_EVENT_BOGUS_THROTTLE        0x8000040CL

//
// MessageId: NSSM_EVENT_CREATEWAITABLETIMER_FAILED
//
// MessageText:
//
// Failed to create waitable timer for service %1:
// %2
// Throttled restarts will not be interruptible.
//
#define NSSM_EVENT_CREATEWAITABLETIMER_FAILED 0x8000040DL

//
// MessageId: NSSM_EVENT_CREATEPROCESS_FAILED_INVALID_ENVIRONMENT
//
// MessageText:
//
// Failed to start service %1.  Program %2 couldn't be launched.
// CreateProcess() failed with ERROR_INVALID_PARAMETER and a process environment was set in the %3 registry value.  It is likely that the environment was incorrectly specified.  %3 should be a REG_MULTI_SZ value comprising strings of the form KEY=VALUE.
//
#define NSSM_EVENT_CREATEPROCESS_FAILED_INVALID_ENVIRONMENT 0xC000040EL

//
// MessageId: NSSM_EVENT_INVALID_ENVIRONMENT_STRING_TYPE
//
// MessageText:
//
// Environment declaration %1 for service %2 is not of type REG_MULTI_SZ and will be ignored.
//
#define NSSM_EVENT_INVALID_ENVIRONMENT_STRING_TYPE 0x8000040FL

//
// MessageId: NSSM_EVENT_SERVICE_CONTROL_HANDLED
//
// MessageText:
//
// Service %1 received %2 control, which will be handled.
//
#define NSSM_EVENT_SERVICE_CONTROL_HANDLED 0x40000410L

//
// MessageId: NSSM_EVENT_SERVICE_CONTROL_NOT_HANDLED
//
// MessageText:
//
// Service %1 received unsupported %2 control, which will not be handled.
//
#define NSSM_EVENT_SERVICE_CONTROL_NOT_HANDLED 0x40000411L

//
// MessageId: NSSM_EVENT_SERVICE_CONTROL_UNKNOWN
//
// MessageText:
//
// Service %1 received unknown service control message %2, which will be ignored.
//
#define NSSM_EVENT_SERVICE_CONTROL_UNKNOWN 0x40000412L

//
// MessageId: NSSM_EVENT_SERVICE_CONFIG_FAILURE_ACTIONS_FAILED
//
// MessageText:
//
// Error configuring service failure actions for service %1.  The service will not be subject to recovery actions if it exits gracefully with a non-zero exit code.
// ChangeServiceConfig2() failed:
// %2
//
#define NSSM_EVENT_SERVICE_CONFIG_FAILURE_ACTIONS_FAILED 0x40000413L

//
// MessageId: NSSM_EVENT_GETPROCESSTIMES_FAILED
//
// MessageText:
//
// GetProcessTimes() failed:
// %1
//
#define NSSM_EVENT_GETPROCESSTIMES_FAILED 0xC0000414L

//
// MessageId: NSSM_EVENT_ATTACHCONSOLE_FAILED
//
// MessageText:
//
// Error attaching to console for service %1.
// AttachConsole() failed:
// %2
//
#define NSSM_EVENT_ATTACHCONSOLE_FAILED  0xC0000415L

//
// MessageId: NSSM_EVENT_SETCONSOLECTRLHANDLER_FAILED
//
// MessageText:
//
// Error setting null handler for Control-C events sent to service %1.
// SetConsoleCtrlHandler() failed:
// %2
//
#define NSSM_EVENT_SETCONSOLECTRLHANDLER_FAILED 0xC0000416L

//
// MessageId: NSSM_EVENT_GENERATECONSOLECTRLEVENT_FAILED
//
// MessageText:
//
// Error generating Control-C event for service %1.
// GenerateConsoleCtrlEvent() failed:
// %2
//
#define NSSM_EVENT_GENERATECONSOLECTRLEVENT_FAILED 0xC0000417L

//
// MessageId: NSSM_EVENT_FREECONSOLE_FAILED
//
// MessageText:
//
// Error detaching from console for service %1.
// FreeConsole() failed:
// %2
//
#define NSSM_EVENT_FREECONSOLE_FAILED    0x80000418L

//
// MessageId: NSSM_EVENT_CREATEFILE_FAILED
//
// MessageText:
//
// CreateFile() failed to open %1:
// %2
//
#define NSSM_EVENT_CREATEFILE_FAILED     0xC0000419L

//
// MessageId: NSSM_EVENT_DUPLICATEHANDLE_FAILED
//
// MessageText:
//
// Error duplicating the filehandle previously opened for %1 as %2.
// DuplicateHandle() failed:
// %3
//
#define NSSM_EVENT_DUPLICATEHANDLE_FAILED 0xC000041AL

//
// MessageId: NSSM_EVENT_GET_OUTPUT_HANDLES_FAILED
//
// MessageText:
//
// Error setting up one or more I/O filehandles.  Service %1 will not be started.
//
#define NSSM_EVENT_GET_OUTPUT_HANDLES_FAILED 0xC000041BL

//
// MessageId: NSSM_EVENT_BOGUS_STOP_METHOD_SKIP
//
// MessageText:
//
// The registry value %2, used to specify the method(s) by which %3 will skip when attempting to stop service %1, was not of type REG_DWORD.  All available methods will be used.
//
#define NSSM_EVENT_BOGUS_STOP_METHOD_SKIP 0x8000041CL

//
// MessageId: NSSM_EVENT_PROCESS_STILL_ACTIVE
//
// MessageText:
//
// The service %1 is stopping but PID %2 is still running.
// Usually %3 will call TerminateProcess() as a last resort to ensure that the process is stopped but the registry value %4 has been set and not all process termination methods have been attempted.
// It will no longer be possible to attempt to control the application and the service will report a stopped status.
//
#define NSSM_EVENT_PROCESS_STILL_ACTIVE  0x8000041DL

//
// MessageId: NSSM_EVENT_LOADLIBRARY_FAILED
//
// MessageText:
//
// Error loading the %1 DLL!
// LoadLibrary() failed:
// %2
//
#define NSSM_EVENT_LOADLIBRARY_FAILED    0x8000041EL

//
// MessageId: NSSM_EVENT_GETPROCADDRESS_FAILED
//
// MessageText:
//
// GetProcAddress(%1) failed:
// %2
//
#define NSSM_EVENT_GETPROCADDRESS_FAILED 0x8000041FL

//
// MessageId: NSSM_EVENT_BOGUS_KILL_CONSOLE_GRACE_PERIOD
//
// MessageText:
//
// The registry value %2, used to specify the maximum number of milliseconds to wait for service %1 to stop after sending a Control-C event, was not of type REG_DWORD.  The default time of %3 milliseconds will be used.
//
#define NSSM_EVENT_BOGUS_KILL_CONSOLE_GRACE_PERIOD 0x80000420L

//
// MessageId: NSSM_EVENT_BOGUS_KILL_WINDOW_GRACE_PERIOD
//
// MessageText:
//
// The registry value %2, used to specify the maximum number of milliseconds to wait for service %1 to stop after posting a WM_CLOSE message to windows managed by the application, was not of type REG_DWORD.  The default time of %3 milliseconds will be used.
//
#define NSSM_EVENT_BOGUS_KILL_WINDOW_GRACE_PERIOD 0x80000421L

//
// MessageId: NSSM_EVENT_BOGUS_KILL_THREADS_GRACE_PERIOD
//
// MessageText:
//
// The registry value %2, used to specify the maximum number of milliseconds to wait for service %1 to stop after posting a WM_QUIT message to the message queues of threads managed by the application, was not of type REG_DWORD.  The default time of %3 milliseconds will be used.
//
#define NSSM_EVENT_BOGUS_KILL_THREADS_GRACE_PERIOD 0x80000422L

//
// MessageId: NSSM_EVENT_AWAITING_SHUTDOWN
//
// MessageText:
//
// %1 has waited %3 of %5 milliseconds for the %2 service to exit.
// Next update in %4 milliseconds.
//
#define NSSM_EVENT_AWAITING_SHUTDOWN     0x40000423L

//
// MessageId: NSSM_EVENT_CREATETHREAD_FAILED
//
// MessageText:
//
// CreateThread() failed:
// %1
//
#define NSSM_EVENT_CREATETHREAD_FAILED   0xC0000424L

//
// MessageId: NSSM_EVENT_STARTUP_DELAY_TOO_LONG
//
// MessageText:
//
// The minimum number of milliseconds which must pass before service %1 is considered to have been started successfully is set to %2.  Access to the Windows service control manager is blocked until the service updates its status, therefore %3 will wait a maximum of %4 milliseconds before reporting the service's state as running.  Service restart throttling will be enforced if the service runs for less than the full %2 milliseconds.
//
#define NSSM_EVENT_STARTUP_DELAY_TOO_LONG 0x40000425L

//
// MessageId: NSSM_EVENT_SETENVIRONMENTVARIABLE_FAILED
//
// MessageText:
//
// SetEnvironmentVariable(%1=%2) failed:
// %3
//
#define NSSM_EVENT_SETENVIRONMENTVARIABLE_FAILED 0x80000426L

//
// MessageId: NSSM_EVENT_ROTATE_FILE_FAILED
//
// MessageText:
//
// Failed to rotate output file %2 for service %1.
// %3 failed for file %4:
// %5
//
#define NSSM_EVENT_ROTATE_FILE_FAILED    0xC0000427L

//
// MessageId: NSSM_EVENT_SERVICE_CONFIG_DESCRIPTION_FAILED
//
// MessageText:
//
// Error setting description for service %1.
// ChangeServiceConfig2() failed:
// %2
//
#define NSSM_EVENT_SERVICE_CONFIG_DESCRIPTION_FAILED 0x40000428L

//
// MessageId: NSSM_EVENT_SERVICE_CONFIG_DELAYED_AUTO_START_INFO_FAILED
//
// MessageText:
//
// Error configuring delayed startup for service %1.  The service will start automatically.
// ChangeServiceConfig2() failed:
// %2
//
#define NSSM_EVENT_SERVICE_CONFIG_DELAYED_AUTO_START_INFO_FAILED 0x40000429L

//
// MessageId: NSSM_EVENT_BOGUS_PRIORITY
//
// MessageText:
//
// The registry value %2, used to specify the priority class for service %1, was not valid.
// %2 should be of type REG_DWORD and correspond to a valid argument to the
// SetPriorityClass() function.
// Service %1 will be started with normal priority.
//
#define NSSM_EVENT_BOGUS_PRIORITY        0x4000042AL

//
// MessageId: NSSM_EVENT_BOGUS_AFFINITY_MASK
//
// MessageText:
//
// Requested affinity range %2 is invalid.
// Service %1 will be allowed to run on any CPU.
//
#define NSSM_EVENT_BOGUS_AFFINITY_MASK   0x8000042BL

//
// MessageId: NSSM_EVENT_EFFECTIVE_AFFINITY_MASK
//
// MessageText:
//
// Requested processor affinity range %2 is not appropriate.
// The maximal affinity range is %3 on this system.
// Service %1 will run with an affinity range of %4.
//
#define NSSM_EVENT_EFFECTIVE_AFFINITY_MASK 0x8000042CL

//
// MessageId: NSSM_EVENT_GETPROCESSAFFINITYMASK_FAILED
//
// MessageText:
//
// Failed to determine an appropriate affinity mask for service %1.
// GetProcessAffinityMask(): %2
//
#define NSSM_EVENT_GETPROCESSAFFINITYMASK_FAILED 0x8000042DL

//
// MessageId: NSSM_EVENT_SETPROCESSAFFINITYMASK_FAILED
//
// MessageText:
//
// Failed to set requested affinity mask for service %1.
// SetProcessAffinityMask(): %2
//
#define NSSM_EVENT_SETPROCESSAFFINITYMASK_FAILED 0xC000042EL

//
// MessageId: NSSM_EVENT_BOGUS_RESTART_DELAY
//
// MessageText:
//
// The registry value %2, used to specify the number of milliseconds by which restarts of service %1 will be delayed, was not of type REG_DWORD.
// No mandatory delay will be employed.
//
#define NSSM_EVENT_BOGUS_RESTART_DELAY   0x8000042FL

//
// MessageId: NSSM_EVENT_RESTART_DELAY
//
// MessageText:
//
// Restart of service %1 will be delayed by %2 milliseconds.
//
#define NSSM_EVENT_RESTART_DELAY         0x40000430L

//
// MessageId: NSSM_EVENT_CREATEPIPE_FAILED
//
// MessageText:
//
// Failed to set up a pipe to read output from service %1.
// Rotation of log file %2 will not be possible while the service is running.
// CreatePipe(): %3
//
#define NSSM_EVENT_CREATEPIPE_FAILED     0xC0000431L

//
// MessageId: NSSM_EVENT_READFILE_FAILED
//
// MessageText:
//
// Failed to read output for service %1.
// If the error persists, no more data will be written to %2.
// ReadFile(): %3
//
#define NSSM_EVENT_READFILE_FAILED       0xC0000432L

//
// MessageId: NSSM_EVENT_WRITEFILE_FAILED
//
// MessageText:
//
// Failed to write output for service %1 to file %2.
// If the error persists, some data may be lost.
// WriteFile(): %3
//
#define NSSM_EVENT_WRITEFILE_FAILED      0xC0000433L

//
// MessageId: NSSM_EVENT_SOMEBODY_SET_UP_US_THE_BOM
//
// MessageText:
//
// Output from service %1 was detected as being in UTF-16 format but an attempt to write an appropriate byte order marker failed.
// It is likely that subsequent attempts to write data to %2 will fail.  If they succeed, the file may not be recognised as being
// in UTF-16 format by applications which attempt to read it.
// WriteFile(): %3
//
#define NSSM_EVENT_SOMEBODY_SET_UP_US_THE_BOM 0x80000434L

//
// MessageId: NSSM_EVENT_ROTATED
//
// MessageText:
//
// Rotated output file %2 for service %1 to %3.
//
#define NSSM_EVENT_ROTATED               0x40000435L

//
// MessageId: NSSM_EVENT_AWAITING_SINGLE_HANDLE
//
// MessageText:
//
// %1 has waited %3 of %5 milliseconds for the %2 handle.
// Next update in %4 milliseconds.
//
#define NSSM_EVENT_AWAITING_SINGLE_HANDLE 0x40000436L

//
// MessageId: NSSM_EVENT_PRESTART_HOOK_ABORT
//
// MessageText:
//
// The %1/%2 hook for service %3 returned exit code %4.
// Service startup will be aborted.
//
#define NSSM_EVENT_PRESTART_HOOK_ABORT   0x40000437L

//
// MessageId: NSSM_EVENT_HOOK_CREATEPROCESS_FAILED
//
// MessageText:
//
// Failed to run %1/%2 hook for service %3.  Program %4 couldn't be launched.
// CreateProcess() failed:
// %5
//
#define NSSM_EVENT_HOOK_CREATEPROCESS_FAILED 0x40000438L

//
// MessageId: NSSM_EVENT_GET_HOOK_FAILED
//
// MessageText:
//
// Failed to find a command for the %1/%2 hook for service %3 in the registry.
//
#define NSSM_EVENT_GET_HOOK_FAILED       0x40000439L

