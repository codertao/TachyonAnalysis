
/* sweep */

void Explosion_SpawnFlash(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = global_bad_shift_rng();
  lVar2 = (longlong)param_3 * (longlong)(int)((uVar3 >> 8 & 0x7fff) + 0xc000);
  iVar4 = DcbPool_AllocTyped(&DAT_005b32b0,7,&DAT_005b31c0);
  if (iVar4 != 0) {
    Quad_Link(iVar4);
    *(undefined4 *)(iVar4 + 0x58) = param_2;
    *(undefined2 *)(iVar4 + 0x74) = 2;
    *(undefined4 *)(iVar4 + 0x5c) = 0;
    *(undefined4 *)(iVar4 + 0x34) = *param_1;
    *(undefined4 *)(iVar4 + 0x38) = param_1[1];
    uVar1 = param_1[2];
    *(uint *)(iVar4 + 0x1c) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    *(undefined4 *)(iVar4 + 0x3c) = uVar1;
    *(undefined4 *)(iVar4 + 0x6c) = 0;
    *(undefined4 *)(iVar4 + 0x18) = 400;
    *(undefined2 *)(iVar4 + 0x30) = 0;
    *(undefined4 *)(iVar4 + 0x2c) = 0xff;
    *(undefined4 *)(iVar4 + 0x98) = 1000;
    if (param_4 == 0) {
      *(undefined1 *)(iVar4 + 0x7f) = 0;
    }
    else {
      *(undefined1 *)(iVar4 + 0x7f) = 1;
    }
    uVar3 = global_bad_shift_rng();
    *(uint *)(iVar4 + 0x54) = (uVar3 >> 8 & 0x1ff) << 0x10;
    *(undefined4 *)(iVar4 + 0x9c) = 0xfffffff6;
    *(undefined4 *)(iVar4 + 0xa0) = 0;
    *(undefined4 *)(iVar4 + 0xa4) = 0;
    *(undefined4 *)(iVar4 + 0xa8) = 0;
    *(undefined4 *)(iVar4 + 0x90) = 0;
    *(undefined1 **)(iVar4 + 0x68) = &LAB_00422f50;
    *(code **)(iVar4 + 0x70) = Explosion_RenderPiece;
    *(undefined4 *)(iVar4 + 0x8c) = 100;
    Model_SelectState((undefined4 *)(iVar4 + 0x18),0);
  }
  return;
}

