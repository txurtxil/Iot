### Como usar Pantalla GPIO  touch LCD st7735r framebuffer , mqtt + Switch + DHT22 + Switch
 Parto del trabajo de Yoshee:
https://4pda.ru/forum/index.php?showtopic=813602&st=280


![Iot Mqtt ](https://github.com/txurtxil/Iot/blob/master/Iot.jpg "Iot Mqtt")

![Iot Mqtt ](https://github.com/txurtxil/Iot/blob/master/3TftOpiZeroW.jpg "Iot Mqtt")

### Para usar la pantalla 1.8 st7735:

He dejado las fuentes y fichero readme en la carpeta lib/ST7735R-LCD

### 1. Compilar e instalar librerias wiringpi:

http://wiringpi.com/download-and-install/

### 2. Paquetes Qt5
   ```javascript
     apt-get install build-essential qtcreator qt5-default qt4-demos qt4-doc qt4-doc-html qt5-doc qt5-doc-html libqt5serialport5 libqt5serialport5-dev
   ```
### 3. Compilar librerias qmqtt e instalarlas 
   ```javascript 
      git clone https://github.com/emqtt/qmqtt
      cd qmqtt
      qmake && make
      make install     
   ```
### 4. Compilar iot, en la carpeta raiz (Iot)
 
   ```javascript 
     cd iot
     qmake
     make
     ./iot
   ```
  
