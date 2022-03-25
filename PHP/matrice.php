<?php

  $elenco = array( array(1, 2), array(3,4), array(5, 6) );

  for ($i=0; $i < 3; $i++){

    for ($j=0 ; $j<2 ; $j++){

      echo $elenco[$i][$j],"  ";
    }

    echo "<br>";
  }


?>
