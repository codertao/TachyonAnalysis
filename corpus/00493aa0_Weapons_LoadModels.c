
/* sweep */

void Weapons_LoadModels(void)

{
  ModelPool_LoadListDefault(&PTR_s_torpseco_pak_00559fc0,&g_ObjModelPool);
  ModelPool_LoadListDefault(&PTR_s_glazl_pak_0055a0d8,&g_FxModelPool);
  WeaponDefs_ResolveModels();
  return;
}

