function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.fcn["TuNT54_day2_homework_initialize"] = {file: "C:\\Users\\Admin\\Desktop\\Homework\\day2new\\TuNT54_day2_homework_ert_rtw\\TuNT54_day2_homework.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["TuNT54_day2_homework_step"] = {file: "C:\\Users\\Admin\\Desktop\\Homework\\day2new\\TuNT54_day2_homework_ert_rtw\\TuNT54_day2_homework.c",
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
	 this.codeMetricsSummary = '<a href="TuNT54_day2_homework_metrics.html">Global Memory: 0(bytes) Maximum Stack: 0(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
