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
               var btnStr = i + "," + j;
               var t = document.createTextNode("");
                         btn.appendChild(t);
                         btn.style.backgroundColor = "#000000";
                         btn.id = btnStr;
                         btn.value = '0';
                         try{throw btn.id}
                         catch(theId){
                         btn.addEventListener('click', function(){pixelFlip(theId);});  
                         }
                         
               
                         document.body.appendChild(btn);

                      }
                       document.write("<br>"); 
                    }

                document.write("<br><br>");




)=====";

const char MAIN_page2[] PROGMEM = R"=====(
               var button = document.createElement("button");
                button.innerHTML = "Send";

               
                var body = document.getElementsByTagName("body")[0];
                body.appendChild(button);

               
                button.value = '0'; 
                button.addEventListener ("click", getPixelState);
                
                }
                 function pixelFlip(btnObj){ 
                  var element = document.getElementById(btnObj);
                  var currentColor = element.style.backgroundColor;
                  if(currentColor == "rgb(0, 0, 0)") 
                  {
                    document.getElementById(btnObj).style.backgroundColor = "rgb(255, 255, 255)"; 
                    document.getElementById(btnObj).value = '1';
                  }
)=====";

const char MAIN_page3[] PROGMEM = R"=====(
else
                  {
                    document.getElementById(btnObj).style.backgroundColor = "rgb(0, 0, 0)"; 
                    document.getElementById(btnObj).value = '0';
                  }
                  
                }

                function getPixelState(){ 
                  var pixelString = []; 
                  var listOfButtons = document.getElementsByTagName('button');
                  for (var i = 0; i < listOfButtons.length; i++) {
                    
                    if(listOfButtons[i].value == '0'){
                      pixelString[i] = 'L';
                    }
                  else
                  {

                    pixelString[i] = 'H';
                  }

)=====";

const char MAIN_page4[] PROGMEM = R"=====(
                  
                }
                pixelString = '' + pixelString.toString();
                window.location.href = window.location.href.split('/')[0] + pixelString;
                alert("Data Sent!");
}
           </script>  
     </head>

     <body onload="printBtn();"> 


     </body>
</html>

)=====";

