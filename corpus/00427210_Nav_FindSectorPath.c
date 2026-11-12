
/* sweep: recursive sector route search */

uint Nav_FindSectorPath(int param_1,int param_2,int *param_3,int param_4,int param_5,int *param_6,
                       uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint local_8;
  int local_4;
  
  iVar3 = param_4;
  local_8 = 0x10000;
  local_4 = 0;
  if ((g_SectorCount < param_7) || (iVar6 = *param_3, iVar6 == 0)) {
    *param_6 = 0;
    return 0x10000;
  }
  do {
    if ((*(short *)(iVar6 + 0x76) == 10) && (*(char *)(*(int *)(iVar6 + 0xf0) + 0x38) != '\0')) {
      iVar1 = *(int *)(iVar6 + 0x110);
      piVar4 = (int *)Sector_FindById(iVar1);
      if (piVar4 != (int *)0x0) {
        if ((piVar4[0xf] == param_2) && (piVar4[0x10] == param_1)) {
          *param_6 = iVar6;
          return param_7;
        }
        iVar2 = *piVar4;
        if ((((iVar2 != iVar3) && (iVar2 != param_5)) && (iVar1 != -1)) &&
           ((uVar5 = Nav_FindSectorPath(param_1,param_2,iVar2,iVar3,param_3,&param_4,param_7 + 1),
            param_4 != 0 && (uVar5 < local_8)))) {
          local_8 = uVar5;
          local_4 = iVar6;
        }
      }
    }
    iVar6 = *(int *)(iVar6 + 8);
    if (iVar6 == 0) {
      *param_6 = local_4;
      return local_8;
    }
  } while( true );
}

