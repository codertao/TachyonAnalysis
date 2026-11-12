
/* sweep */

void Ocf_ErrNoParent(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_80 [128];
  
  str_sprintf(local_80,s_Part___d__could_not_find_parent_p_00532ca0,*(undefined4 *)(param_1 + 0x44),
              param_2);
  Error_Report(local_80,param_3 + 0x14);
  return;
}

