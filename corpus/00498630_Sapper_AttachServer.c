
/* def+0xec create-attached (0x4983d0), then Sapper_BroadcastAttach */

void Sapper_AttachServer(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        ,undefined4 param_5,int param_6)

{
  int iVar1;
  
  iVar1 = WeaponDef_Get(param_3);
  if (*(code **)(iVar1 + 0xec) != (code *)0x0) {
    iVar1 = (**(code **)(iVar1 + 0xec))(iVar1,param_4,param_5,param_1,param_2,param_6);
    if ((iVar1 != 0) && (param_6 == 0)) {
      Sapper_BroadcastAttach
                (param_3,iVar1 + 0xfc,iVar1 + 0x108,param_1,*(undefined4 *)(iVar1 + 0x78),
                 *(undefined4 *)(iVar1 + 100));
    }
  }
  return;
}

