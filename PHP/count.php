<?php
     $elenco = array ('elena', 'maria', 'nicoletta', 'giorgio', 'anna', 'lucia');
         $l_array= count($elenco);
         echo "la lunghezza dell'array è $l_array <br>";
         echo "i contenuti sono ... <br>";
         for ($i=0; $i<$l_array; $i++)

         {
             echo "$i: $elenco[$i]<br>";
         }
?>
