<?php
     $elenco = array ('elena', 'maria', 'nicoletta', 'giorgio', 'anna', 'lucia');
         $l_array= count($elenco);
         echo "la lunghezza dell'array è $l_array <br>";
         echo "i contenuti sono ... <br>";

         #as è la clausola che permette di estrarre valore dalle singole componenti di $elenco

         foreach($elenco as $valore){
          echo "$valore <br>";

         }

?>
