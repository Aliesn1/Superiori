<?php
$Numeri = array(1,2,5,89);

for ($i=0;$i<4;$i++)
{
  $somma=$somma+$Numeri[$i];
}

echo $somma;

$Tabella = array[array(87,42,7), array (46,75,2)];
for ($i=0;$i<2;$i++)
{
  for ($j=0;$j<3;$j++)
  {
    $Tabella [$i][$j]." ";
  }
  echo "<br>";
}

$array_multidimensionale = array(
'chiave1'=>1,
'chiave2'=>2;
'chiave3'=>3;
'chiave4'=>4;
'chiave5'=>5;
);

$array_monodimensionale = array(1,2,3,4,5);
$somma=0;
foreach ($array_monodimensionale as $valore) {
  $somma+=$valore;
}
echo "La somma degli elementi degli araay è: ".$somma;

?>
