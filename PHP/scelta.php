<?php


$c_1=5;
$scelta_1=$_POST["scelta_1"];
$c_2=9;
$scelta_2=$_POST["scelta_2"];

if (($scelta_1==$c_1) && ($scelta_2==$c_2)){
  printf("hai indovinato i due numeri: $c_1 e $c_2");
}
elseif (($scelta_1==$c_1) || ($scelta_2==$c_2)) {
  printf("hai idovinato solo un numero dei due");
}
else {
  printf("Hai sbagliato tutto");
}



 ?>
