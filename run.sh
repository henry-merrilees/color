#python3 py/image_gen.py
python3 main.py load "dog.png" "state/image.mem"
python3 main.py view_bw "state/image.mem"
verilator --cc --timing --exe --build -j 0 -Wall --top-module color sim_main.cpp color.sv --trace
obj_dir/Vcolor
python3 main.py view_color "state/output.mem"
