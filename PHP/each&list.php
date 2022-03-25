<?php
     $elenco = array ('elena', 'maria', 'nicoletta', 'giorgio', 'anna', 'lucia');
         $l_array= count($elenco);
         echo "la lunghezza dell'array è $l_array <br>";
         echo "i contenuti sono ... <br>";
        while(list($i, $valore)= each($elenco) ){ #la funzione each estrae una ad una le componenti del vettore "elenco"
                                                  #la funzione list permette di indicare i campi di interesse che poi verranno stampati
            echo "$i: $valore <br>";
        }
?>
