
/* client: angles = Vec_DirAngles(src, hitPos) -> ShieldFx_Spawn(target, hitPos, angles, variant) */

void ShieldFx_SpawnLocal(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  undefined1 local_c [12];
  
  Vec_DirAngles(param_1,param_2,local_c);
  ShieldFx_Spawn(param_4,param_2,local_c,param_3);
  return;
}

