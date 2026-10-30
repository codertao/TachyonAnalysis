
void FUN_0041abde(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  FUN_0041b850();
  *(undefined4 *)(unaff_ESI + 0x34) = *param_2;
  *(undefined4 *)(unaff_ESI + 0x38) = param_2[1];
  *(undefined4 *)(unaff_ESI + 0x3c) = param_2[2];
  *(undefined4 *)(unaff_ESI + 0x4c) = *param_3;
  *(undefined4 *)(unaff_ESI + 0x50) = param_3[1];
  *(undefined4 *)(unaff_ESI + 0x54) = param_3[2];
  *(undefined4 *)(unaff_ESI + 0x1c) = 0x10000;
  *(undefined4 *)(unaff_ESI + 0xb8) = 0x10000;
  *(undefined1 **)(unaff_ESI + 0x68) = &LAB_0041a710;
  *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  *(undefined4 *)(unaff_ESI + 0x88) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0x10;
  *(undefined4 *)(unaff_ESI + 0x28) = 0x18;
  iVar1 = DAT_005b29c8;
  *(int *)(unaff_ESI + 0xd8) = param_7;
  *(int *)(unaff_ESI + 0x8c) = iVar1;
  *(undefined1 *)(unaff_ESI + 0xc3) = 3;
  *(undefined1 *)(unaff_ESI + 0xc0) = 4;
  *(undefined4 *)(unaff_ESI + 0xd4) = 1;
  if (param_7 == 0) {
    uVar2 = *(undefined4 *)(DAT_005b29c8 + 0xa4);
    *(undefined4 *)(unaff_ESI + 0xdc) = uVar2;
    *(undefined4 *)(unaff_ESI + 0x58) = uVar2;
    *(undefined4 *)(unaff_ESI + 0xe0) = *(undefined4 *)(DAT_005b29c8 + 0xa4);
    *(undefined1 *)(unaff_ESI + 0x7e) = *(undefined1 *)(DAT_005b29c8 + 0xa8);
  }
  else if (param_7 == 1) {
    uVar2 = *(undefined4 *)(DAT_005b29c8 + 0xd0);
    *(undefined4 *)(unaff_ESI + 0xdc) = uVar2;
    *(undefined4 *)(unaff_ESI + 0x58) = uVar2;
    *(undefined4 *)(unaff_ESI + 0xe0) = *(undefined4 *)(DAT_005b29c8 + 0xd0);
    *(undefined1 *)(unaff_ESI + 0x7e) = *(undefined1 *)(DAT_005b29c8 + 0xd4);
  }
  else if (param_7 == 2) {
    uVar2 = *(undefined4 *)(DAT_005b29c8 + 0xa4);
    *(undefined4 *)(unaff_ESI + 0xdc) = uVar2;
    *(undefined4 *)(unaff_ESI + 0x58) = uVar2;
    *(undefined4 *)(unaff_ESI + 0xe0) = *(undefined4 *)(DAT_005b29c8 + 0xa4);
    *(undefined1 *)(unaff_ESI + 0x7e) = *(undefined1 *)(DAT_005b29c8 + 0xa8);
    uVar2 = FUN_0041aa30();
    *(undefined4 *)(unaff_ESI + 0xf4) = uVar2;
  }
  FUN_0045cbf0();
  FUN_0041a830(param_2,param_3,param_4,param_5,param_6);
  return;
}

