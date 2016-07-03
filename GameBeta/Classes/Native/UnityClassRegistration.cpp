struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 94 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//4. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//7. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//8. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//9. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//10. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//11. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//12. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//13. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//14. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//15. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//16. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//17. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//18. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//19. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//20. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//21. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//22. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//23. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//24. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//25. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//26. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//27. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//28. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//29. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//30. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//31. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//32. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//33. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//34. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//35. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//36. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//37. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//38. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//39. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//40. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//41. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//42. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//43. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//44. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//45. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//46. WebCamTexture
	void RegisterClass_WebCamTexture();
	RegisterClass_WebCamTexture();

	//47. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//48. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//49. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//50. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//51. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//52. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//53. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//54. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//55. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//56. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//57. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//58. TerrainCollider
	void RegisterClass_TerrainCollider();
	RegisterClass_TerrainCollider();

	//59. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//60. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//61. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//62. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//63. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//64. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//65. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//66. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//67. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//68. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//69. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//70. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//71. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//72. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//73. TerrainData
	void RegisterClass_TerrainData();
	RegisterClass_TerrainData();

	//74. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//75. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//76. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//77. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//78. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//79. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//80. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//81. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//82. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//83. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//84. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//85. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//86. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//87. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//88. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//89. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//90. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//91. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//92. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//93. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
