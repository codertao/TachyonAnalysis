
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* parse one IMAGE/SUN entry into a 0x64-byte record */

void Bdf_ParseImageEntry(float param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [24];
  
  fVar2 = param_1;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  iVar5 = FUN_0049bdb0(param_1,local_28,0x10,0,4,1);
  if (iVar5 != 0) {
    FUN_0049b930(fVar2,local_38,0x10,0,4,2);
    iVar5 = param_3;
    if (param_3 != 0) {
      FUN_004b1ca0(0x30000400);
    }
    puVar3 = param_2;
    FUN_00431850(param_2,local_28,local_38,local_38,&DAT_005ac548,0);
    FUN_004b1ca0(0);
    FUN_0049b930(fVar2,0,0,&param_1,2,3);
    local_58 = (undefined4)(longlong)ROUND(param_1 * _DAT_0052e540 * (float)_DAT_0052e538);
    uVar4 = local_58;
    FUN_0049b930(fVar2,0,0,&param_1,2,4);
    local_58 = (undefined4)(longlong)ROUND(param_1 * _DAT_0052e540 * (float)_DAT_0052e538);
    local_40 = local_58;
    if (iVar5 == 0) {
      FUN_0049b930(fVar2,0,0,&param_1,2,5);
      local_58 = (undefined4)(longlong)ROUND(param_1 * _DAT_0052e544);
      puVar3[5] = local_58;
    }
    else {
      puVar3[5] = iVar5;
    }
    FUN_0049b930(fVar2,0,0,&param_1,2,6);
    local_58 = (undefined4)(longlong)ROUND(param_1 * _DAT_0052e544);
    puVar3[7] = local_58;
    FUN_0052db6a(local_18,uVar4,local_40,0);
    FUN_0052dbcd(local_18);
    puVar1 = puVar3 + 3;
    FUN_004b24d0(puVar1,puVar1);
    puVar3[6] = 0x50;
    puVar3[0x16] = *puVar3;
    puVar3[10] = 8;
    FUN_004b2950(puVar3 + 6,0);
    FUN_0040f380(puVar1,&local_50,puVar3 + 0x13);
  }
  return;
}

