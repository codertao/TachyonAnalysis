
/* sweep: recursive */

uint MapPath_Search(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  piVar1 = (int *)MapNode_Find(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((piVar1[2] & 1U) == 0) {
    if ((piVar1[1] == param_3) && (*piVar1 == param_4)) {
      iVar2 = MapPath_Length(&DAT_005713e0);
      if (iVar2 != 0) {
        iVar2 = MapPath_Length(&DAT_00571580);
        iVar3 = MapPath_Length(&DAT_005713e0);
        if (iVar3 <= iVar2) {
          return 0;
        }
      }
      MapPath_Copy(&DAT_005713e0,&DAT_00571580);
      return 0;
    }
    piVar1[2] = piVar1[2] | 1;
    uVar5 = 0xffffffff;
    uVar4 = MapPath_Length(&DAT_00571580);
    piVar1 = piVar1 + 3;
    param_2 = 8;
    do {
      MapPath_Truncate(&DAT_00571580,uVar4);
      iVar2 = *piVar1;
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x98) != 0)) &&
         (iVar2 = MapNode_Find(*(undefined4 *)(iVar2 + 0x8c),*(undefined4 *)(iVar2 + 0x88)),
         (*(byte *)(iVar2 + 8) & 1) == 0)) {
        MapPath_Push(&DAT_00571580,*piVar1);
        iVar2 = MapPath_Search(*(undefined4 *)(*piVar1 + 0x8c),*(undefined4 *)(*piVar1 + 0x88),
                               param_3,param_4);
        if ((iVar2 != -1) && (iVar2 + 1U < uVar5)) {
          uVar5 = iVar2 + 1U;
        }
      }
      piVar1 = piVar1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return uVar5;
  }
  return 0xffffffff;
}

