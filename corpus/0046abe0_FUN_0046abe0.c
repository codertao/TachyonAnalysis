
void FUN_0046abe0(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_4;
  
  local_4 = (char *)0x0;
  if ((param_2 != (char *)0x0) && (param_1 != (int *)0x0)) {
    pcVar5 = (char *)*param_1;
    if (pcVar5 != (char *)0x0) {
      iVar2 = -1;
      pcVar4 = pcVar5;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (iVar2 != -2) {
        uVar3 = 0xffffffff;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_0048e3d0(&local_4,~uVar3,4,s_temp_mem_0054abcc,0xa100);
        if (local_4 != (char *)0x0) {
          str_sprintf(local_4,&DAT_00536768,*param_1);
        }
      }
    }
    if (*param_1 != 0) {
      OurFreeMem(*param_1);
      *param_1 = 0;
    }
    if (local_4 == (char *)0x0) {
      iVar2 = 0;
    }
    else {
      uVar3 = 0xffffffff;
      pcVar5 = local_4;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar2 = ~uVar3 - 1;
    }
    uVar3 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_0048e3d0(param_1,~uVar3 + iVar2,4,s_long_text_buffer_0054abb8,0xa100);
    iVar2 = *param_1;
    if (iVar2 != 0) {
      if (local_4 == (char *)0x0) {
        str_sprintf(iVar2,&DAT_00536768,param_2);
      }
      else {
        str_sprintf(iVar2,s__s__s_005336a4,local_4);
      }
    }
    if (local_4 != (char *)0x0) {
      OurFreeMem(local_4);
    }
  }
  return;
}

