<?php

function maggiore($x,$y){
  if($x>$y){

  }
  return $x;
}

function scambio(&$x,&$y){
  $app=$x;
  $x=$y;
  $y=$app;
}

function cerchio($r){
  $c=($r*$r)*3.14;
  return $c;

}

function circonferenza($r){
  $ci=(2*3.14)*$r;
  return $ci;
}


$a=20;
$b=10;
$r=7;
echo "il numero maggiore e': ".maggiore($a,$b)."<br>";
echo "le variabili scambiate sono: ".scambio($a,$b)."a= ".$a." "."b= ".$b."<br>";
echo "La circonferenza e': ".circonferenza($r)."<br>";
echo "Il cerchio e': ".cerchio($r)."<br>";

 ?>
