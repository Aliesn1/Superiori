<?php
    $a=9;
    $b=4;
    $c=17;
    if ($a>$b)
    {
        $massimo=$a;
        $minimo=$b;
    }
    else
    {
        $maassimo=$b;
        $minimo=$a;
    }
    if ($c>$massimo)
    {
        $massimo=$c;
    }
    else
    {
        if($c<$minimo)
        {
            $minimo=$c;
        }
    }
    echo "Il massimo tra ($a, $b, $c) è $massimo", " e il minimo è $minimo";
?>
