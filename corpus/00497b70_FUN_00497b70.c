
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00497b70(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_4;
  
  local_4 = 0x10000;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x90);
    if (((param_2 != (int *)0x0) && (*(short *)((int)param_2 + 0x36) == 0)) &&
       (iVar2 = *param_2, iVar2 != 0)) {
      DAT_0056579c = (uint)*(ushort *)(param_2 + 0xd);
      DAT_00565788 = 0;
      DAT_0056578c = 0;
      DAT_00565790 = 0;
      iVar3 = FUN_00497b20(iVar2,param_4,param_5,&local_4,param_3,param_2);
      if (iVar3 == 1) {
        if (*(int *)(GLBL_SOME_CONTEXT + 0x110) != 0) {
          *(int *)(param_1 + 0x90) = *(int *)(GLBL_SOME_CONTEXT + 0x110);
        }
        uVar4 = Weapon_TryFire(param_1,param_2,param_3,local_4,param_6);
        *(undefined4 *)(param_1 + 0x90) = uVar1;
        if ((DAT_00565790 != 0) && (DAT_0056578c != 0)) {
          _DAT_0055e058 = 0;
          if (1 < DAT_00565790) {
            DAT_0056578c = DAT_0056578c + (DAT_0056578c >> 1);
            FUN_004a0760(0,DAT_0056578c,DAT_00565788,1);
            return uVar4;
          }
          FUN_004a0760(0,DAT_0056578c,DAT_00565788,0);
        }
        return uVar4;
      }
      if (iVar3 == 2) {
        (**(code **)(iVar2 + 0xe0))(param_1,iVar2);
      }
    }
  }
  return 0;
}

