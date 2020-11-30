function CodeDefine() { 
this.def = new Array();
this.def["runModel"] = {file: "ert_main_c.html",line:63,type:"var"};
this.def["stopSem"] = {file: "ert_main_c.html",line:64,type:"var"};
this.def["baserateTaskSem"] = {file: "ert_main_c.html",line:65,type:"var"};
this.def["schedulerThread"] = {file: "ert_main_c.html",line:72,type:"var"};
this.def["baseRateThread"] = {file: "ert_main_c.html",line:73,type:"var"};
this.def["threadJoinStatus"] = {file: "ert_main_c.html",line:74,type:"var"};
this.def["terminatingmodel"] = {file: "ert_main_c.html",line:75,type:"var"};
this.def["baseRateTask"] = {file: "ert_main_c.html",line:76,type:"fcn"};
this.def["exitFcn"] = {file: "ert_main_c.html",line:93,type:"fcn"};
this.def["terminateTask"] = {file: "ert_main_c.html",line:99,type:"fcn"};
this.def["px4_simulink_app_main"] = {file: "ert_main_c.html",line:114,type:"fcn"};
this.def["untitled_DW"] = {file: "untitled_c.html",line:20,type:"var"};
this.def["untitled_M_"] = {file: "untitled_c.html",line:23,type:"var"};
this.def["untitled_M"] = {file: "untitled_c.html",line:24,type:"var"};
this.def["untitled_step"] = {file: "untitled_c.html",line:27,type:"fcn"};
this.def["untitled_initialize"] = {file: "untitled_c.html",line:57,type:"fcn"};
this.def["untitled_terminate"] = {file: "untitled_c.html",line:127,type:"fcn"};
this.def["position_setpoint_s_t"] = {file: "untitled_h.html",line:48,type:"type"};
this.def["offboard_control_mode_s_t"] = {file: "untitled_h.html",line:49,type:"type"};
this.def["DW_untitled_T"] = {file: "untitled_h.html",line:57,type:"type"};
this.def["RT_MODEL_untitled_T"] = {file: "untitled_types_h.html",line:20,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:95,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:148,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["untitled_c.html"] = "../untitled.c";
	this.html2Root["untitled_c.html"] = "untitled_c.html";
	this.html2SrcPath["untitled_h.html"] = "../untitled.h";
	this.html2Root["untitled_h.html"] = "untitled_h.html";
	this.html2SrcPath["untitled_private_h.html"] = "../untitled_private.h";
	this.html2Root["untitled_private_h.html"] = "untitled_private_h.html";
	this.html2SrcPath["untitled_types_h.html"] = "../untitled_types.h";
	this.html2Root["untitled_types_h.html"] = "untitled_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.html2SrcPath["rtmodel_h.html"] = "../rtmodel.h";
	this.html2Root["rtmodel_h.html"] = "rtmodel_h.html";
	this.html2SrcPath["MW_custom_RTOS_header_h.html"] = "../MW_custom_RTOS_header.h";
	this.html2Root["MW_custom_RTOS_header_h.html"] = "MW_custom_RTOS_header_h.html";
	this.html2SrcPath["MW_target_hardware_resources_h.html"] = "../MW_target_hardware_resources.h";
	this.html2Root["MW_target_hardware_resources_h.html"] = "MW_target_hardware_resources_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","untitled_c.html","untitled_h.html","untitled_private_h.html","untitled_types_h.html","rtwtypes_h.html","rtmodel_h.html","MW_custom_RTOS_header_h.html","MW_target_hardware_resources_h.html"];
