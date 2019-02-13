Pod::Spec.new do |s|  
    s.name              = 'AmpiOS'
    s.version           = '1.1.5-beta2'
    s.summary           = 'Amp.ai client for iOS  applications.'
    s.homepage          = 'https://github.com/ScaledInference/Amp-iOS-SDK.git'
    s.authors           = { 'Steve Mask' => 'steve@scaledinference.com', 'Olha Prokopiuk' => 'olha@scaledinference.com'}
    s.license           = { :type => 'MIT', :file => 'LICENSE' }

    s.platform          = :ios, '9.0'
    s.swift_version     = '4.2'

    s.source            = { :git => 'https://github.com/ScaledInference/Amp-iOS-SDK.git', :tag => 'v1.1.5-beta2' }
    
	s.dependency 'SQLite.swift', '~> 0.11.5'
    s.ios.vendored_frameworks = 'AmpiOS.framework'
end
