function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled"};
	this.sidHashMap["untitled"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Constant12"] = {sid: "untitled:69"};
	this.sidHashMap["untitled:69"] = {rtwname: "<Root>/Constant12"};
	this.rtwnameHashMap["<Root>/Constant13"] = {sid: "untitled:70"};
	this.sidHashMap["untitled:70"] = {rtwname: "<Root>/Constant13"};
	this.rtwnameHashMap["<Root>/Constant14"] = {sid: "untitled:71"};
	this.sidHashMap["untitled:71"] = {rtwname: "<Root>/Constant14"};
	this.rtwnameHashMap["<Root>/Constant17"] = {sid: "untitled:75"};
	this.sidHashMap["untitled:75"] = {rtwname: "<Root>/Constant17"};
	this.rtwnameHashMap["<Root>/Constant18"] = {sid: "untitled:81"};
	this.sidHashMap["untitled:81"] = {rtwname: "<Root>/Constant18"};
	this.rtwnameHashMap["<Root>/Constant19"] = {sid: "untitled:82"};
	this.sidHashMap["untitled:82"] = {rtwname: "<Root>/Constant19"};
	this.rtwnameHashMap["<Root>/Constant4"] = {sid: "untitled:57"};
	this.sidHashMap["untitled:57"] = {rtwname: "<Root>/Constant4"};
	this.rtwnameHashMap["<Root>/uORB Write Advanced1"] = {sid: "untitled:56"};
	this.sidHashMap["untitled:56"] = {rtwname: "<Root>/uORB Write Advanced1"};
	this.rtwnameHashMap["<Root>/uORB Write Advanced2"] = {sid: "untitled:68"};
	this.sidHashMap["untitled:68"] = {rtwname: "<Root>/uORB Write Advanced2"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
