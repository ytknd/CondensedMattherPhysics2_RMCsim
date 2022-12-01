set terminal png
set terminal png size 1000,1000
set output "detector_3d.png"
set xlabel "Gamma-ray Number"
set ylabel "Distance"
plot "result.txt" with points pt 0 lc rgb "red"