pipeline {
   agent any
   environment {
      NEW_VERSION = '1.3.0'
   }
   stages {
       stage("build") {
           steps {
               echo "Dev: Building the app ver ${NEW_VERSION} ..."
           }
       }
       stage("test") {
           when {
             expression {
                 BRANCH_NAME == 'dev' || BRANCH_NAME == 'master'
             }
           }
           steps {
               echo 'Dev: Testing the app...'
           }
       }
       stage("deploy") {
           steps {
               echo 'Dev: deploy the app...'
           }
       }
   }

   post {
      always {
         // condition - always do
         echo 'Dev: always do'
      }
      success {
         echo 'Dev: only in case of success'
      }
      failure {
         echo 'Dev: only in case of failure'
      }
   }
}
