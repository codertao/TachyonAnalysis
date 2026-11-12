
/* sweep: "NO DOCK FOUND FOR OBJECT %d" */

void ShipCmd_DockWith(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x104) != 8) {
    iVar2 = Sped_FindById(param_2,*(undefined4 *)(param_1 + 100));
    if (iVar2 != 0) {
      pcVar1 = *(code **)(*(int *)(iVar2 + 0x8c) + 0x58);
      if (pcVar1 != (code *)0x0) {
        iVar2 = (*pcVar1)(iVar2,3,0);
        if (iVar2 != 0) {
          Ai_SetState(param_1,8);
          *(int *)(param_1 + 0x90) = iVar2;
          return;
        }
        Debug_Printf(s_NO_DOCK_FOUND_FOR_OBJECT__d_00532690,param_2);
        return;
      }
      Debug_Printf(s_INVALID_OBJECT_TYPE_FOR_DOCKING___00532664,param_2);
    }
  }
  return;
}

