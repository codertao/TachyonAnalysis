
/* debug: "Spawning alias %s [SPED_OBJ %d]" */

void Sped_LogSpawn(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_80 [128];
  
  str_sprintf(local_80,s_Spawning_alias___s___SPED_OBJ__d_005325ec,param_2,param_1);
  SrvSend_TextSimple(local_80,0);
  return;
}

