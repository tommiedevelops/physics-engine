#include "PhysicsEngine.h"
#include "PlayerMoveScript.h"

using namespace PhysicsEngine;

namespace DemoScenes
{
	class PlaneController : public ScriptableEntity
	{
		void OnCreate() override
		{

		}

		void OnStart() override
		{

		}

		void OnUpdate(float dt) override
		{

		}

		void OnDestroy() override
		{

		}
	};

	class AeroSimScene : public Scene
	{
		void SetUp() override
		{
			std::cout << "Hello World!\n";
		}
	};
}
