<?php

$persona [1] = 'anna';
$persona [3] = 'luca';
$persona [6] = 'mario';
$persona [] = 'carlo';

sort ($persona); #ordina i valori del vettore

for ($i=0; $i<count($persona); $i++){

echo "<br> posizione =".$i." valore= ".current($persona)."<br>";
next($persona);

}


?>
