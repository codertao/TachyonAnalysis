
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Mem_DumpPoolStats(int param_1,undefined4 param_2)

{
  uint local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  undefined4 uStack_4;
  
  local_10 = 0;
  local_14 = 0;
  local_c = 0;
  if (param_1 != 0) {
    Mem_CheckPool(param_1,param_2,&local_10,&local_14,&local_c);
    uStack_4 = 0;
    local_8 = local_14;
    c_fprintf(param_1,s_Max_Pointers_used____d__Total_Me_0055d974,local_10,local_14,
              (double)((float)local_14 * _DAT_0052e6cc));
    uStack_4 = 0;
    local_8 = local_c;
    c_fprintf(param_1,s_Bytes_Wasted____d_bytes____2fk__0055d950,local_c,
              (double)((float)local_c * _DAT_0052e6c8));
  }
  return;
}

