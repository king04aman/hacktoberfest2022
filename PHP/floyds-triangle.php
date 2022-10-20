<?php

/**
 * Prints Floyd's Triangle
 * @param int $size
 * @return void
 */
function printFloydsTriangle(int $size): void
{
    $num = 0;

    for ($i = 1; $i <= $size; $i++) {
        for ($j = 0; $j < $i; $j++) {
            echo str_pad(++$num . "", 3, " ", STR_PAD_LEFT);
        }
        echo "\n";
    }
}

printFloydsTriangle(10);