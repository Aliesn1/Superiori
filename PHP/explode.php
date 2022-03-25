<?php
#la funzione explode serve a creare da una stringa, o da un file di dati, un array utilizzando un dato carattere di separazione. In questo caso una virgola


$dati= 'brontolo, eolo, cucciolo, mammolo, pisolo, dotto, gongolo';
$nani= explode(',', $dati);
while (list($chiave, $valore)= each($nani)) {
  echo "chiave:".$chiave." valore: ".$valore."<br>";
}





?>
