using ReactNative.Bridge;
using System;
using System.Collections.Generic;
using Windows.ApplicationModel.Core;
using Windows.UI.Core;

namespace Moderate.Servic.To.Relax.RNModerateServicToRelax
{
    /// <summary>
    /// A module that allows JS to share data.
    /// </summary>
    class RNModerateServicToRelaxModule : NativeModuleBase
    {
        /// <summary>
        /// Instantiates the <see cref="RNModerateServicToRelaxModule"/>.
        /// </summary>
        internal RNModerateServicToRelaxModule()
        {

        }

        /// <summary>
        /// The name of the native module.
        /// </summary>
        public override string Name
        {
            get
            {
                return "RNModerateServicToRelax";
            }
        }
    }
}
