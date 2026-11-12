
/* sweep: guess */

void Mine_SpawnClient(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DcbPool_AllocTyped(&DAT_005b32b0,3,&DAT_005b31c0);
  if (iVar1 != 0) {
    Quad_Link(iVar1);
    *(undefined4 *)(iVar1 + 0x114) = 0;
    *(undefined2 *)(iVar1 + 0x74) = 2;
    *(undefined4 *)(iVar1 + 0x58) = DAT_00565668;
    *(code **)(iVar1 + 0x70) = Proj_Think;
    *(undefined4 *)(iVar1 + 0x34) = *param_1;
    *(undefined4 *)(iVar1 + 0x38) = param_1[1];
    *(undefined4 *)(iVar1 + 0x3c) = param_1[2];
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined2 *)(iVar1 + 0x30) = 0;
    uVar2 = WeaponDef_Get(param_2);
    *(undefined4 *)(iVar1 + 0xdc) = uVar2;
    Blast_Init(iVar1);
    Flash_SpawnDefault(param_1);
    Snd_PlayAtEnt(6,6,0,iVar1,0x10000);
  }
  return;
}

