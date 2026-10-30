
void FUN_004b0280(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_80 [128];
  
  if (DAT_00669214 != (code *)0x0) {
    str_sprintf(local_80,s__s_INVALID_TEXTURE_SIZE_W__d_H___0055ec24,param_1,param_2,param_3);
    (*DAT_00669214)(local_80);
  }
  return;
}

