
/* sweep: guess */

undefined4 Cbin_ParseTemplate(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 local_100 [256];
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    return 0;
  }
  if (*param_1 != 0) {
    param_1 = param_1 + 5;
    do {
      uVar2 = param_1[-2];
      if ((uVar2 & 1) == 0) {
        if ((uVar2 & 2) == 0) {
          if ((uVar2 & 4) != 0) {
            iVar7 = *param_1;
            iVar4 = param_1[-1];
            iVar3 = param_1[-5];
            uVar6 = 0;
            iVar5 = 0;
            goto LAB_0049beb4;
          }
          if ((uVar2 & 8) != 0) {
            Cbin_GetParam_Ctx(param_1[-4],param_1[-3],local_100,7,0,0,*param_1,param_2);
            Crt_sscanf(local_100,&DAT_0053ebdc,param_1[-5]);
            if ((*(byte *)(param_1 + -2) & 0x10) != 0) {
              uVar6 = _tolower(*(undefined4 *)param_1[-5]);
              *(undefined4 *)param_1[-5] = uVar6;
            }
          }
        }
        else {
          Cbin_GetParam_Ctx(param_1[-4],param_1[-3],0,0,param_1[-5],2,*param_1,param_2);
        }
      }
      else {
        iVar7 = *param_1;
        iVar5 = param_1[-5];
        uVar6 = 1;
        iVar4 = 0;
        iVar3 = 0;
LAB_0049beb4:
        Cbin_GetParam_Ctx(param_1[-4],param_1[-3],iVar3,iVar4,iVar5,uVar6,iVar7,param_2);
      }
      piVar1 = param_1 + 1;
      param_1 = param_1 + 6;
    } while (*piVar1 != 0);
  }
  return 1;
}

