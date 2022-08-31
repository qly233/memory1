
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name cunchuqi -dir "D:/zuchengyuanli/cunchuqi/planAhead_run_3" -part xc7a100tfgg484-2L
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "cunchuqi.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {cunchuqi.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top cunchuqi $srcset
add_files [list {cunchuqi.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc7a100tfgg484-2L
