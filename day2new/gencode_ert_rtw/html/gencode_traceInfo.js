function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "gencode"};
	this.sidHashMap["gencode"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "gencode:1"};
	this.sidHashMap["gencode:1"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "gencode:3"};
	this.sidHashMap["gencode:3"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Divide"] = {sid: "gencode:5"};
	this.sidHashMap["gencode:5"] = {rtwname: "<Root>/Divide"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "gencode:2"};
	this.sidHashMap["gencode:2"] = {rtwname: "<Root>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
