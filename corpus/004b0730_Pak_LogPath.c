
/* sweep */

void Pak_LogPath(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = c_fopen(s_pak_log_0055ec70,&DAT_005338ac);
  c_fprintf(uVar1,s_pack_PUT_PATH_HERE___s_0055ec58,param_1);
  c_fclose(uVar1);
  return;
}

