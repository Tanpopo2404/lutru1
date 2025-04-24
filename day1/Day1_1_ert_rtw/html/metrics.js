function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.fcn["Day1_1_initialize"] = {file: "C:\\Users\\Admin\\Desktop\\Homework\\day1\\Day1_1_ert_rtw\\Day1_1.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["Day1_1_step"] = {file: "C:\\Users\\Admin\\Desktop\\Homework\\day1\\Day1_1_ert_rtw\\Day1_1.c",
	stack: 0,
	stackTotal: 0};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data; }; 
	 this.codeMetricsSummary = '<a href="Day1_1_metrics.html">Global Memory: 0(bytes) Maximum Stack: 0(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
