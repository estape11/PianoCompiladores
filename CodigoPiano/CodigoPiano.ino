/**
 * Author: Esteban Agüero Pérez
 * @estape11
 * ITCR 2017
 * Arduino MEGA
 * MP3 Shield VS1053
 */
#include <SPI.h>
#include <SdFat.h>
#include <SdFatUtil.h> 
#include <SFEMP3Shield.h>
/*
 * Pines del teclado del piano
 */
int teclaC=45;
int teclaD=41;
int teclaE=37;
int teclaF=35;
int teclaG=31;
int teclaA=27;
int teclaB=23;
int teclaCN=43;
int teclaDN=39;
int teclaFN=33;
int teclaGN=29;
int teclaAN=25;
/*
 * Variables para almacenar las entradas de los pines
 */
SdFat sd;
SFEMP3Shield MP3player;

void setup() {
  Serial.begin(9600);
  //SD
  sd.begin(SD_SEL, SPI_HALF_SPEED);
  MP3player.begin();
  pinMode(teclaC,INPUT);
  pinMode(teclaD,INPUT);
  pinMode(teclaE,INPUT);
  pinMode(teclaF,INPUT);
  pinMode(teclaG,INPUT);
  pinMode(teclaA,INPUT);
  pinMode(teclaB,INPUT);
  pinMode(teclaCN,INPUT);
  pinMode(teclaDN,INPUT);
  pinMode(teclaFN,INPUT);
  pinMode(teclaGN,INPUT);
  pinMode(teclaAN,INPUT);
  MP3player.setVolume(0,0);
}

void loop() {
  //PRIMERO PONER LOS ACORDES
  if(digitalRead(teclaC)==HIGH&&digitalRead(teclaE)==HIGH&&digitalRead(teclaG)==HIGH){
    MP3player.stopTrack();
    Serial.println("C Mayor");
    MP3player.playMP3("CMa.mp3");
  }else if(digitalRead(teclaD)==HIGH&&digitalRead(teclaFN)==HIGH&&digitalRead(teclaA)==HIGH){
    MP3player.stopTrack();
    Serial.println("Re Mayor");
    MP3player.playMP3("DMa.mp3");
  }else if(digitalRead(teclaE)==HIGH&&digitalRead(teclaGN)==HIGH&&digitalRead(teclaB)==HIGH){
    MP3player.stopTrack();
    Serial.println("Mi Mayor");
    MP3player.playMP3("EMa.mp3");
  }else if(digitalRead(teclaF)==HIGH&&digitalRead(teclaA)==HIGH&&digitalRead(teclaC)==HIGH){
    MP3player.stopTrack();
    Serial.println("Fa Mayor");
    MP3player.playMP3("FMa.mp3");
  }else if(digitalRead(teclaG)==HIGH&&digitalRead(teclaB)==HIGH&&digitalRead(teclaD)==HIGH){
    MP3player.stopTrack();
    Serial.println("Sol Mayor");
    MP3player.playMP3("GMa.mp3");
  }else if(digitalRead(teclaA)==HIGH&&digitalRead(teclaCN)==HIGH&&digitalRead(teclaE)==HIGH){
    MP3player.stopTrack();
    Serial.println("La Mayor");
    MP3player.playMP3("AMa.mp3");
  }else if(digitalRead(teclaB)==HIGH&&digitalRead(teclaDN)==HIGH&&digitalRead(teclaFN)==HIGH){
    MP3player.stopTrack();
    Serial.println("Si Mayor");
    MP3player.playMP3("BMa.mp3");
  }else if(digitalRead(teclaCN)==HIGH&&digitalRead(teclaF)==HIGH&&digitalRead(teclaGN)==HIGH){
    MP3player.stopTrack();
    Serial.println("Do Sostenido Mayor");
    MP3player.playMP3("C#Ma.mp3");
  }else if(digitalRead(teclaDN)==HIGH&&digitalRead(teclaG)==HIGH&&digitalRead(teclaAN)==HIGH){
    MP3player.stopTrack();
    Serial.println("Re Sostenido Mayor");
    MP3player.playMP3("D#Ma.mp3");
  }else if(digitalRead(teclaFN)==HIGH&&digitalRead(teclaAN)==HIGH&&digitalRead(teclaCN)==HIGH){
    MP3player.stopTrack();
    Serial.println("Fa Sostenido Mayor");
    MP3player.playMP3("F#Ma.mp3");
  }else if(digitalRead(teclaGN)==HIGH&&digitalRead(teclaC)==HIGH&&digitalRead(teclaDN)==HIGH){
    MP3player.stopTrack();
    Serial.println("Sol Sostenido Mayor");
    MP3player.playMP3("G#Ma.mp3");
  }else if(digitalRead(teclaAN)==HIGH&&digitalRead(teclaD)==HIGH&&digitalRead(teclaF)==HIGH){
    MP3player.stopTrack();
    Serial.println("La Sostenido Mayor");
    MP3player.playMP3("A#Ma.mp3");
  }else if(digitalRead(teclaC)==HIGH&&digitalRead(teclaDN)==HIGH&&digitalRead(teclaG)==HIGH){
    MP3player.stopTrack();
    Serial.println("Do Menor");
    MP3player.playMP3("CMe.mp3");
  }else if(digitalRead(teclaD)==HIGH&&digitalRead(teclaF)==HIGH&&digitalRead(teclaA)==HIGH){
    MP3player.stopTrack();
    Serial.println("Re Menor");
    MP3player.playMP3("DMe.mp3");
  }else if(digitalRead(teclaE)==HIGH&&digitalRead(teclaG)==HIGH&&digitalRead(teclaB)==HIGH){
    MP3player.stopTrack();
    Serial.println("Mi Menor");
    MP3player.playMP3("EMe.mp3");
  }else if(digitalRead(teclaF)==HIGH&&digitalRead(teclaGN)==HIGH&&digitalRead(teclaC)==HIGH){
    MP3player.stopTrack();
    Serial.println("Fa Menor");
    MP3player.playMP3("FMe.mp3");
  }else if(digitalRead(teclaG)==HIGH&&digitalRead(teclaAN)==HIGH&&digitalRead(teclaD)==HIGH){
    MP3player.stopTrack();
    Serial.println("Sol Menor");
    MP3player.playMP3("GMe.mp3");
  }else if(digitalRead(teclaA)==HIGH&&digitalRead(teclaC)==HIGH&&digitalRead(teclaE)==HIGH){
    MP3player.stopTrack();
    Serial.println("La Menor");
    MP3player.playMP3("AMe.mp3");
  }else if(digitalRead(teclaB)==HIGH&&digitalRead(teclaD)==HIGH&&digitalRead(teclaFN)==HIGH){
    MP3player.stopTrack();
    Serial.println("Si Menor");
    MP3player.playMP3("BMe.mp3");
  }else if(digitalRead(teclaCN)==HIGH&&digitalRead(teclaE)==HIGH&&digitalRead(teclaGN)==HIGH){
    MP3player.stopTrack();
    Serial.println("Do Sostenido Menor");
    MP3player.playMP3("C#Me.mp3");
  }else if(digitalRead(teclaDN)==HIGH&&digitalRead(teclaFN)==HIGH&&digitalRead(teclaAN)==HIGH){
    MP3player.stopTrack();
    Serial.println("Re Sostenido Menor");
    MP3player.playMP3("D#Me.mp3");
  }else if(digitalRead(teclaFN)==HIGH&&digitalRead(teclaA)==HIGH&&digitalRead(teclaCN)==HIGH){
    MP3player.stopTrack();
    Serial.println("Fa Sostenido Menor");
    MP3player.playMP3("F#Me.mp3");
  }else if(digitalRead(teclaGN)==HIGH&&digitalRead(teclaB)==HIGH&&digitalRead(teclaDN)==HIGH){
    MP3player.stopTrack();
    Serial.println("Sol Sostenido Menor");
    MP3player.playMP3("G#Me.mp3");
  }else if(digitalRead(teclaAN)==HIGH&&digitalRead(teclaCN)==HIGH&&digitalRead(teclaF)==HIGH){
    MP3player.stopTrack();
    Serial.println("La Sostenido Menor");
    MP3player.playMP3("A#Me.mp3");
  }
  //TECLAS NATURALES (BLANCAS)
  else if(digitalRead(teclaC)==HIGH){
    MP3player.stopTrack();
    Serial.println("C");
    MP3player.playMP3("C.mp3");
  }else if(digitalRead(teclaD)==HIGH){
    MP3player.stopTrack();
    Serial.println("D");
    MP3player.playMP3("D.mp3");
  }else if(digitalRead(teclaE)==HIGH){
    MP3player.stopTrack();
    Serial.println("E");
    MP3player.playMP3("E.mp3");
  }else if(digitalRead(teclaF)==HIGH){
    MP3player.stopTrack();
    Serial.println("F");
    MP3player.playMP3("F.mp3");
  }else if(digitalRead(teclaG)==HIGH){
    MP3player.stopTrack();
    Serial.println("G");
    MP3player.playMP3("G.mp3");
  }else if(digitalRead(teclaA)==HIGH){
    MP3player.stopTrack();
    Serial.println("A");
    MP3player.playMP3("A.mp3");
  }else if(digitalRead(teclaB)==HIGH){
    MP3player.stopTrack();
    Serial.println("B");
    MP3player.playMP3("B.mp3");
  }
  //TECLAS SOSTENIDAS (NEGRAS)
  else if(digitalRead(teclaCN)==HIGH){
    MP3player.stopTrack();
    Serial.println("C#");
    MP3player.playMP3("C#.mp3");
  }else if(digitalRead(teclaDN)==HIGH){
    MP3player.stopTrack();
    Serial.println("D#");
    MP3player.playMP3("D#.mp3");
  }else if(digitalRead(teclaFN)==HIGH){
    MP3player.stopTrack();
    Serial.println("F#");
    MP3player.playMP3("F#.mp3");
  }else if(digitalRead(teclaGN)==HIGH){
    MP3player.stopTrack();
    Serial.println("G#");
    MP3player.playMP3("G#.mp3");
  }else if(digitalRead(teclaAN)==HIGH){
    MP3player.stopTrack();
    Serial.println("A#");
    MP3player.playMP3("A#.mp3");
  }
  delay(100);
}
