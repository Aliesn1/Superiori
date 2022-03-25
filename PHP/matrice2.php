<?php

  $elenco = array( array(1, 2, 3, 4, 5), array(6, 7, 8, 9, 10), array(11, 12, 13, 14, 15) );
$somma=0;
  for ($i=0; $i < 3; $i++){

    for ($j=0 ; $j<5 ; $j++){

      $somma=$somma+$elenco[$i][$j];
      echo $elenco[$i][$j],"  ";
    }

    echo "<br>";
  }

  echo "La media aritmetica della matrice è ". $somma/15;


?>
