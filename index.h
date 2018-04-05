
const char MAIN_page[] PROGMEM = R"=====(
<html>
     <head>

     	<title>Designhub IoT Workshop</title>

           <script>

           		
           		var numRows = 128;
           		var numCols = 32;

                function printBtn() {

                    for (var i = 0; i < numRows; i++) {

                    	for(var j = 0; j < numCols; j++){

						   var btn = document.createElement("button");
						   var btnStr = i-1 + "," + j 
						   var t = document.createTextNode("");
	                       btn.appendChild(t);
	                       btn.style.backgroundColor = "#000000";
	                       btn.id = btnStr;
	                       btn.value = btnStr;
	                       //Javascript workaround to pass variable
	                       try{throw btn.id}
	                       catch(theId){
	                       btn.addEventListener('click', function(){pixelFlip(theId);}); 
	                       }
						   
						   
	                       document.body.appendChild(btn);

                    	}
                       document.write("<br>");
                    }
                }

                function pixelFlip(btnObj){ 
                	var element = document.getElementById(btnObj);
                	var currentColor = element.style.backgroundColor;
                	if(currentColor == "rgb(0, 0, 0)") 
                	{
                		document.getElementById(btnObj).style.backgroundColor = "rgb(255, 255, 255)"; 
                	}
                	else
                	{
                		document.getElementById(btnObj).style.backgroundColor = "rgb(0, 0, 0)"; 
                	}

                }

           </script>  
     </head>

     <body onload="printBtn();"> 


     </body>
</html>
)=====";