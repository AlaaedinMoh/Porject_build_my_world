#include <gazebo/gazebo.hh>

namespace gazebo
{
  class GazeboWorldProjectlugin : public WorldPlugin
  {
    public: GazeboWorldProjectlugin() : WorldPlugin()
            {
              printf("Welcome to Alaaedin's Gazebo World\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(GazeboWorldProjectlugin)
}
