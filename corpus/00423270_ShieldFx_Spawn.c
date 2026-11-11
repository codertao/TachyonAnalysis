
/* client: shield-hit effect DCB (type 9, client pool) from g_ShieldFxTable[variant]: model, sound,
   flags 1=at hit pt / 2=fixed scale 4.0; else centred on target, scale = target radius*0.61,
   follows target */

void ShieldFx_Spawn(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_0041b790(&DAT_005b32b0,9,&DAT_005b31c0);
  if (iVar3 != 0) {
    FUN_0041b8b0(iVar3);
    iVar1 = param_4 * 0xc;
    *(undefined2 *)(iVar3 + 0x74) = 2;
    *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(&g_ShieldFxTable)[param_4 * 3];
    *(code **)(iVar3 + 0x70) = ShieldFx_Render;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    *(code **)(iVar3 + 0x68) = ShieldFx_Think;
    *(undefined4 *)(iVar3 + 0x6c) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0x90;
    *(undefined2 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x4c) = *param_3;
    *(undefined4 *)(iVar3 + 0x50) = param_3[1];
    *(undefined4 *)(iVar3 + 0x54) = param_3[2];
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    if (((&DAT_005359d0)[iVar1] & 1) == 0) {
      *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    }
    else {
      *(undefined4 *)(iVar3 + 0x34) = *param_2;
      *(undefined4 *)(iVar3 + 0x38) = param_2[1];
      *(undefined4 *)(iVar3 + 0x3c) = param_2[2];
    }
    if (((&DAT_005359d0)[iVar1] & 2) == 0) {
      lVar2 = (longlong)*(int *)(*(int *)(param_1 + 0x58) + 0x30) * 40000;
      *(uint *)(iVar3 + 0x1c) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    }
    else {
      *(undefined4 *)(iVar3 + 0x1c) = 0x40000;
    }
    Model_SelectState(iVar3 + 0x18,0);
    *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(&DAT_005359d0 + iVar1);
    *(int *)(iVar3 + 0x98) = param_1;
    *(undefined4 *)(iVar3 + 0x90) = 2;
    *(undefined4 *)(iVar3 + 0x94) = 10;
    *(undefined4 *)(iVar3 + 0x8c) = 0;
    if (DAT_005b2178 < DAT_005b3304) {
      FUN_004666e0(2,2,*(undefined4 *)(&DAT_005359cc + iVar1),iVar3,0x10000);
      DAT_005b2178 = DAT_005b3304 + 0xc;
    }
  }
  return;
}

