
/* sweep */

void ShipBuy_AddCalloutLine
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = Mnu_FindImageRef(&GLBL_UI_ELEM_LIST,param_5);
  if (iVar4 == 0) {
    uVar3 = 0xff;
    uVar2 = 0xff;
    uVar1 = 0xff;
  }
  else {
    uVar1 = *(undefined1 *)(iVar4 + 0x40);
    uVar2 = *(undefined1 *)(iVar4 + 0x44);
    uVar3 = *(undefined1 *)(iVar4 + 0x48);
  }
  MountLine_Add(param_1,param_2,param_3,param_2,0xc,0xffffffff,uVar1,uVar2,uVar3,1,1,0xf,0,0x19);
  MountLine_Add(param_3,param_2,param_3,param_4,0xc,0xffffffff,uVar1,uVar2,uVar3,1,1,0xf,5,0x19);
  return;
}

