
/* sweep */

void Srv_RespawnPlayer(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x13c) = 0;
  iVar2 = *(int *)(iVar1 + 100);
  if (*(code **)(g_ActiveRules + 0x3c) != (code *)0x0) {
    (**(code **)(g_ActiveRules + 0x3c))(param_1);
  }
  if (iVar2 == *(int *)(iVar1 + 100)) {
    Ent_AddAsTarget(iVar1);
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (param_2 != 0) {
    SrvSend_Respawn(param_1,iVar1 + 0x34,iVar1 + 0x4c);
  }
  Ship_InitPower(iVar1);
  return;
}

