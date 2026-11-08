
/* look up server entity by id, call its +0x80 damage handler with dmg, type 0x26 (collision) */

void TachSrv_DamageEntityById(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0045d680(param_1,*(undefined4 *)(DAT_0058b064 + 100));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x80) != 0)) {
    DAT_005653e0 = param_2;
    DAT_005653f4 = 0;
    DAT_005653dc = 0x26;
    (**(code **)(iVar1 + 0x80))(iVar1);
  }
  return;
}

